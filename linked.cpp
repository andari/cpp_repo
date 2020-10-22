#include <bits/stdc++.h> 
using namespace std; 

class Node
{
    public:
    int data;
    Node *next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node *node) 
{ 
	while (node != NULL) 
	{ 
		cout<<" "<<node->data; 
		node = node->next; 
	} 
} 


int main()
{
    Node* head = NULL;

    push(&head, 7);
    push(&head, 8);
    push(&head, 6);

    cout << "Created Linked list is: ";
    printList(head);

    return 0;
    
}