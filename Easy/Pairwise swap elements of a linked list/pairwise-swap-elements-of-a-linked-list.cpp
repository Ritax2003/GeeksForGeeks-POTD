//{ Driver Code Starts
#include <bits/stdc++.h> 
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
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head */
class Solution
{
    private:
    struct Node* reverseK(struct Node* head, int k, int rem){
        if(head == NULL || rem < k) return head;
        
        struct Node* prev = NULL;
        struct Node* cur = head;
        struct Node* forward = NULL;
        int count = 0;
        
        while(cur && count < k){
            forward = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = forward;
            count++;
        }
        
        if(cur){
            head -> next = reverseK(cur, k, rem-count);
        }
        
        return prev;
    }
    
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        struct Node* temp = head;
        int rem = 0;
        while(temp != NULL){
            temp = temp -> next;
            rem++;
        }
        
        struct Node* ans = reverseK(head, 2, rem);
        return ans;
    }
};

//{ Driver Code Starts.

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		map<Node*, int> mp;
		mp[head] = head->data;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
			mp[tail] = tail->data;
		}
		struct Node *failure = new Node(-1);
		Solution ob;
		head = ob.pairWiseSwap(head);
		int flag = 0;
		struct Node *temp = head;
		while(temp){
		    if(mp[temp] != temp->data){
		        flag = 1;
		        break;
		    }
		    temp = temp->next;
		}
		if(flag)
		    printList(failure);
		else
		    printList(head);
	}
	return 0; 
}

// } Driver Code Ends