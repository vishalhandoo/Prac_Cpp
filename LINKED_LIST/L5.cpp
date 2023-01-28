#include <iostream>
using namespace std;


//structure of node
class node {
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};


//fuction to insert a node at the tail
void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    
    if(head==NULL) {
        head=n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next = n;
}


//Display function
void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



//function to reverse a node
node* recursiveReverse(node* &head) {
    
    //Base condition
    if(head==NULL || head->next==NULL) {
        return head;
    }
    
    node* newHead=recursiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newHead;
}


int main() {

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    //displaying original linked list
    display(head);
    node* newhead=recursiveReverse(head);
    //displaying reversed linked list
    display(newhead);

    return 0;
}