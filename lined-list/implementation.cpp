#include<iostream>
using namespace std;


// Create a Structure
struct Node {
    int data;
    Node *next; //Data type of next node is same as the current node
    Node(int x) { 
        // A constructor for the default values
        data = x;
        next = NULL;  
    }
};

void printList(Node *head) {
    Node *current = head;
    while (current != NULL)  
    {
        cout << current->data << endl;
        current = current->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1; //Arrow opertor is used to access the members of a class or a structure
    temp1->next = temp2;

    // cout << head->data << endl;
    // cout << head->next << endl;
    // cout << temp1->next << endl;
    // cout << temp2->next << endl;

    printList(head);
    return 0;
}