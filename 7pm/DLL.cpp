#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};



void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
// 1.
void insertAtTail(Node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    Node *n = new Node(val);

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deletionAtHead(Node *&head)
{
    Node *toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

void deletion(Node *&head, int pos)
{
    if(pos==1)
    {
        deletionAtHead(head);
        return;
    }

    Node *temp = head;
    int count = 0;

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int length(Node *head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    deletion(head, 2);
    display(head);
    cout<<length(head);

}