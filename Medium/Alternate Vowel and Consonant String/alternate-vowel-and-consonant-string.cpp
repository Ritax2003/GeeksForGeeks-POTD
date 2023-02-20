//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string s, int n){
    	set <char> st;
    	st.insert ('a');st.insert ('e');st.insert ('i');st.insert ('o');st.insert ('u');// to store the frequencies of vowels and consonants.
    	int vow[26] = {0}, cons[26] = {0};// to count the total number of vowels and total number of consonants. 
    	int numVow = 0, numCons = 0;
    	char smallestVow = 'u', smallestCons = 'z';
    	for (int i = 0; i < n; ++i){
    	    // if there's any character apart from the lowercase english characters,// the input is wrong. Hence, we return -1
    		if (s[i] < 'a' or s[i] > 'z')
    			return "-1";// if current character is a consonant
    		if (st.find (s[i]) == st.end ()){
    			cons[s[i] - 'a']++;
    			numCons++;
    			if (s[i] < smallestCons)
    				smallestCons = s[i];
    		}// else if it's a vowel
    		else{
    			vow[s[i] - 'a']++;
    			numVow++;
    			if (s[i] < smallestVow)
    				smallestVow = s[i];
    		}}// if the count differs by more than 1, the alternate arrangement is not possible
    	if (abs (numVow - numCons) > 1)
    		return "-1";
        bool putVow;// deciding which character (vowel/ consonant) will come first
    	if (numVow == numCons){
    		if (smallestVow < smallestCons)
    			putVow = true;
    		else
    			putVow = false;
    	}
    	else if (numVow > numCons)
    		putVow = true;
    	else
    		putVow = false;
    	int i = 0, j = 0, itr = 0;// computing the resultant string
    	while (i < 26 or j < 26){
    		if (putVow){
    			while (i < 26 and vow[i] == 0) i++;
    			if (i == 26)
    				break;
    			s[itr++] = ('a' + i);
    			vow[i]--;
    			putVow = false;
    		}
    		else{
    			while (j < 26 and cons[j] == 0) j++;
    			if (j == 26)
    				break;
    			s[itr++] = ('a' + j);
    			cons[j]--;
    			putVow = true;
    		}}
    	return s;
    }
    // Contributed By: Pranay Bansal
};


//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends