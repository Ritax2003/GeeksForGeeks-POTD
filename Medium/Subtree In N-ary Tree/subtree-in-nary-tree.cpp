//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    vector<Node*> children;
    Node(int val){
        data=val;
    }
};

class N_ary_Tree{
public:
    Node *root;
    int size;
    N_ary_Tree(){
        root=NULL;
        size=0;
    }
    Node *add(int new_key,Node *parent_key=NULL){
        Node *new_node = new Node(new_key);
        if(parent_key == NULL){
            root = new_node;
            size = 1;
        }
        else{
            parent_key->children.push_back(new_node);
            size += 1;
        }
        return new_node;
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution{

public:
    set<string> track;
    //do dfs and create the preorder string  from the root 
    void dfs(Node *root, string &s) {
        if (!root) return;
        s += to_string(root->data) + ",";
        for (int i = 0; i < root->children.size(); i++) {
            if (root->children[i] != NULL) {
                dfs(root->children[i], s);
            }
        }
    }
    
    void helper(Node *root, set<string> &ans) {
        if (!root) return;
        //do bfs 
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            //for every node create dfs string and check whether already covered 
            while (size--) {
                Node* node = q.front();
                string preorder = "";
                dfs(node, preorder);
                //if subtree is there previously add to ans 
                if (track.find(preorder) != track.end()) {
                    ans.insert(preorder);
                } else {
                    //if subtee is not there then insert to track set 
                    track.insert(preorder);
                }
                q.pop();
                for (int i = 0; i < node->children.size(); i++) {
                    if (node->children[i] != NULL) {
                        q.push(node->children[i]);
                    }
                } 
            }
        }
    }
    
    int duplicateSubtreeNaryTree(Node *root) {
        set<string> ans;
        helper(root, ans);
        //ans is size of ans set 
        return ans.size();
    }

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        if(i==0){
            string p;
            getline(cin,p);
        }
        string str;
        getline(cin,str);
        stringstream st(str);
        vector<string> s;
        string y;
        while(st>>y){
            s.push_back(y);
        }
        N_ary_Tree *tree = new N_ary_Tree();
        Node *curr;
        queue<Node*> q;
        for(int i=0;i<s.size();i++){
            if (i == 0){
                curr=tree->add(stoi(s[0]));
            }
            else if(s[i] == " "){
                continue;
            }
            else if(q.size() and s[i] == "N"){
                curr = q.front();
                q.pop();
            }
            else if(s[i] != "N"){
                q.push(tree->add(stoi(s[i]), curr));
            }
        }
        Solution ob;
        int res = ob.duplicateSubtreeNaryTree(tree->root);
        cout<<res<<endl;
    }
}
// } Driver Code Ends