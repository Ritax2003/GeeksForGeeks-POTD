//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {vector<int> ans;
         struct Node* ptr1 = head1;
        while(ptr1!=NULL){
            ans.push_back(ptr1->data);
            ptr1=ptr1->next;
        }
        struct Node* ptr2 = head2;
        while(ptr2!=NULL){
            ans.push_back(ptr2->data);
            ptr2=ptr2->next;
        }
        sort(ans.begin(), ans.end());
        
        struct Node* head3 = new Node(ans[0]);
        struct Node* ptr3 = head3;
        int n = ans.size();
        int i = 1;
        while(i<n){
            if(ans[i]!=ans[i-1]){
                struct Node* temp = new Node(ans[i]);
                ptr3->next = temp;
                ptr3= ptr3->next;
            }
            i++;
        }
        return head3;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends