#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
};

void insert(Node *&head,int data){
    Node *temp = new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
    
    cout<<"Inserted Item : "<<temp->data<<endl;

}

void print(Node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<endl;
}



int main(){

    Node* head = NULL;

    insert(head,4);
    print(head);

    return 0;
}