#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

Node* insertatk(Node* head, int k, int data)
{
	if (head == NULL)
		return new Node(data);

	if (k == 1) {
		Node* newnode = new Node(data);
		newnode->next = head;
		head = newnode;
		return head;
	}
	else{
        head->next=insertatk(head->next, k-1, data);
    }
		
    return head;
}

void print(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	Node* head = new Node(1);
	Node* n1 = new Node(2);
	head->next = n1;
	Node* n2 = new Node(3);
	n1->next = n2;
	Node* n3 = new Node(4);
	n2->next = n3;
	Node* n4 = new Node(5);
	n3->next = n4;
	Node* n5 = new Node(6);
	n4->next = n5;
	Node* n6 = new Node(7);
	n5->next = n6;
	n6->next = NULL;

	int k = 4;
	int data = 100;
    print(insertatk(head, k, data));
	return 0;
}
