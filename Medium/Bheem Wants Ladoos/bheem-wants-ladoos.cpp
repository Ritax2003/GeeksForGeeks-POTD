//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/



class Solution{

    public:
    unordered_map<int,vector<int>>mp;
    void f(Node *root)
    {
        if(!root) return ;
        if(root->left)
        {
            mp[root->data].push_back(root->left->data);
            mp[root->left->data].push_back(root->data);
            f(root->left);
            
        }
        if(root->right)
        {
            mp[root->data].push_back(root->right->data);
            mp[root->right->data].push_back(root->data);
            f(root->right);
            
        }
    }
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
        f(root);
        queue<int>q;
        unordered_map<int,int>vis;
        q.push(home);
        vis[home]++;
        int l=0;
        int s=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                
                int c=q.front();
                q.pop();
                if(l<=k)s=s+c;
                for(auto i:mp[c])
                {
                    if(!vis[i])
                    {
                    vis[i]=1;
                    q.push(i);
                    }
                }
            }
            l++;
        }
        return s;
    }


};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int home,k;
        cin>> home >> k;
        getchar();
        Solution obj;
        cout<< obj.ladoos(root,home,k) << endl;
    }
	return 0;
}


// } Driver Code Ends