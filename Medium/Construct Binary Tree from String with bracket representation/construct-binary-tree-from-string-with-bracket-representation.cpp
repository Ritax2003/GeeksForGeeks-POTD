//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
    private:
    int start=0;
    Node* str2TreeHelper(string s){
        if(start>=s.length())
            return NULL;
        bool flag=false;
        if(s[start]=='-'){
               flag=true;
               start++;
            }
            int num=0;
             while(start<s.length() && s[start]>='0' && s[start]<='9'){
                 int digit = (int)(s[start]-'0');
                 num=num*10+digit;
                 start++;
             }   
             if(flag==true)
                num=-num;
            Node* root = new Node(num);
            if(start>=s.length())
                return root;
            if(start<s.length() && s[start]=='('){
                start++;
                root->left = str2TreeHelper(s);
            }
             if(start<s.length() && s[start]==')'){
                start++;
                return root;
            }
            if(start<s.length() && s[start]=='('){
                start++;
                root->right = str2TreeHelper(s);
            }

            

             if(start<s.length() && s[start]==')'){

                start++;

                return root;

            }

            return root;

        

    }

public:

    // function to construct tree from string

    Node *treeFromString(string str){

        if(str.length()==0){

             return NULL;

        }

        return str2TreeHelper(str);

    }

};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends