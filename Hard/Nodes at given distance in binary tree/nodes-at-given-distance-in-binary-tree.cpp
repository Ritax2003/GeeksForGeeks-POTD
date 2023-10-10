//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
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
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
    Node* helper(int target, Node *node){
        if(!node)return node;
        if(target == node->data)return node;
        Node *temp1 = helper(target, node->left);
        if(temp1 == NULL)temp1 = helper(target, node->right);
        return temp1;
    }
public:
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        unordered_map<Node*, vector<Node*>>adj;
        unordered_map<Node*, int> m;
        queue<Node*> q;
        
        q.push(root);
        while(q.size()){
            auto t = q.front();
            m[t] = t->data;
            q.pop();
            if(t->left){
                adj[t].push_back(t->left);
                adj[t->left].push_back(t);
                q.push(t->left);
            }
            if(t->right){
                adj[t].push_back(t->right);
                adj[t->right].push_back(t);
                q.push(t->right);
            }
        }
        auto node = helper(target, root);
        queue<pair<Node*, int>>q2;
        q2.push({node, 0});
        unordered_map<Node*, int> vis;
        unordered_map<Node*, int> vis2;
        vis[node] =1;
        vector<int> res;
        while(q2.size()){
            auto ele = q2.front().first;
            int dist = q2.front().second;
            q2.pop();
            for(auto &x: adj[ele]){
                if(vis[x])continue;
                if(dist + 1 == k and vis2[x] == 0 and x != ele){
                    res.push_back(m[x]); 
                    vis2[x] = 1;
                }
                vis[x] = 1;
                q2.push({x, dist + 1});
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends