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

int length(Node *node){
    if(node==NULL){
        return 0;
    }
    else{
        return 1+length(node->next);
    }
}



int main(){

    Node* head = NULL;

    insert(head,4);
    cout<<endl<<length(head);

    return 0;
}