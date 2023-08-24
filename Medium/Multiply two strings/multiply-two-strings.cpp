//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
    // Remove leading zeros from both strings
    s1.erase(0, s1.find_first_not_of('0'));
    s2.erase(0, s2.find_first_not_of('0'));

    // Handle negative numbers
    bool isNegative = false;
    if (s1[0] == '-') {
        isNegative = !isNegative;
        s1.erase(0, 1);
    }
    if (s2[0] == '-') {
        isNegative = !isNegative;
        s2.erase(0, 1);
    }

    // Initialize a result string with zeros
    string result(s1.size() + s2.size(), '0');

    // Multiply the digits and add to the result
    for (int i = s1.size() - 1; i >= 0; --i) {
        for (int j = s2.size() - 1; j >= 0; --j) {
            int product = (s1[i] - '0') * (s2[j] - '0');
            int sum = product + (result[i + j + 1] - '0');
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] += (sum / 10);
        }
    }

    // Remove leading zeros from the result
    size_t start = result.find_first_not_of('0');
    if (start != string::npos) {
        result = result.substr(start);
    } else {
        result = "0"; // If the result is zero, return "0".
    }

    // Add the negative sign if needed
    if (isNegative && result != "0") {
        result = '-' + result;
    }

    return result;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends