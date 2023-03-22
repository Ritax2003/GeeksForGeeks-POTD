//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
int x=0;int y=0,flag=-1;

int f1(Node *root){    //to find min sum path from target to leaf node
    if(!root->left and !root->right)return root->data;
    if(root->left and !root->right)return root->data+f1(root->left);
    if(!root->left and root->right)return root->data+f1(root->right);
    return root->data+min(f1(root->left),f1(root->right));
}

void f(Node *root,int target){  //to find the sum of path from root to                                                       //target node(one such path exists)


    if(!root)return ;
    if(root->data==target){
        flag=1;
        y=f1(root);
        return;
    }
    if(root->data<target){
        x+=root->data;
        f(root->right,target);
    }
    else {
        x+=root->data;
        f(root->left,target);
    }
}
    int maxDifferenceBST(Node *root,int target){
        // Code here
        
        f(root,target);
        if(flag==-1)return -1;
       
        return x-y+target;
    }
};



//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends