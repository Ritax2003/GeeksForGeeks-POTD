//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    Node* ReverseLinkedList(Node *head)
    {
        if (!head) return NULL;
        Node *pre = NULL, *cur = head, *last = head->next;
        while (cur)
        {
            cur->next = pre;
            pre = cur;
            if (last)
            {
                cur = last;
                last = last->next;   
            }
            else break;
        }
        return pre;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        if (!node1) return ReverseLinkedList(node2);
        if (!node2) return ReverseLinkedList(node1);
        Node* head = NULL;
        if (node1->data < node2->data)
        {
            head = node1;
            node1 = node1->next;
        }
        else 
        {
            head = node2;
            node2 = node2->next;
        }
        Node *tmp = head;
        while (node1 != NULL || node2 != NULL)
        {
            if (!node1)
            {
                tmp->next = node2;
                break;
            }
            else if (!node2)
            {
                tmp->next = node1;
                break;
            }
            else if (node1->data < node2->data)
            {
                tmp->next = node1;
                node1 = node1->next;
                tmp = tmp->next;
            }
            else 
            {
                tmp->next = node2;
                node2 = node2->next;
                tmp = tmp->next;
            }
        }
        return ReverseLinkedList(head);
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends