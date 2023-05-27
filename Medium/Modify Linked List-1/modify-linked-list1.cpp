//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
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
class Solution{
    public:
    struct Node* rev(struct Node* head ){
        struct Node* curr = head;
        struct Node* prev = NULL;
        struct Node* forw;
        while(curr){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    struct Node* middle(struct Node* head){
        struct Node* fast = head;
        struct Node* slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    struct Node* modifyTheList(struct Node *head)
    {
        if(head->next == NULL) return head; 
        struct Node* mid = middle(head);
        struct Node* head2 = mid->next;
        mid->next = NULL;
        head2 = rev(head2);
        struct Node* h = head2;
        int temp;
        struct Node* head1 = head;
        struct Node* last ;
        while(head2 && head1){
            temp = head1->data;
            head1->data = -(head1->data)+(head2->data);
            head2->data = temp;
            last = head1;
            head2 = head2->next;
            head1 = head1->next;
        }
        while(head1){
            last = head1;
            head1 = head1->next;
        }
        h = rev(h);
        last->next = h;
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends