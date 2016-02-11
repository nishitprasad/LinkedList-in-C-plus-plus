/*
1. Create your own LinkedList class for storing integers which should include two methods:

add(int num) - this should add a new Node to the end of the list with a value of num
get(int i) - this should return the value of the Node at position i in the List.*/

/*
2. Implement the following two methods in your own LinkedList class:

add(index, item) Add an item to a specific location in the list.
remove(index) - Remove an item from a specific location in the List.
You should also implement the size method and a private helper method getNode(int index) to return the Node at a specific index.*/

#include<iostream>
#include<cstdlib>

using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

class LinkedList
{
	public:
	Node *head = NULL;
	//1.
	void add(int num) {
		if(head==NULL) {
			head = (Node*)malloc(sizeof(Node));
			head->data=num;
			head->next=NULL;
		}
		else {
			Node *temp;
			temp = head;
			while(temp->next!=NULL) {
				temp = temp->next;
			}
			Node *newNode = (Node*)malloc(sizeof(Node));
			newNode->data = num;
			temp->next = newNode;
		}
	}

	int get(int i) {
		Node *temp;
		temp=head;
		while(i--) {
			temp = temp->next;
		}
		return temp->data;
	}
	
	//2.
	Node * getNode(int index) {
		Node *temp;
		temp = head;
		for(int i=0; i<index; i++) {
			temp=temp->next;
		}
		return temp;
	}
	
	void add(int index, int item) {
		Node *pred = getNode(index-1);
		Node *succ = pred->next;
		Node *newNode = (Node*)malloc(sizeof(Node));
		newNode->data = item;
		pred->next = newNode;
		newNode->next = succ;
	}
	
	int remove(int index) {
		Node *remNode;
		if(index==0) {
			remNode = head;
			head=head->next;
		}
		else {
		
			Node *pred = getNode(index-1);
			remNode = pred->next;
			Node *succ = remNode->next;
			pred->next = succ;
		}
		return (remNode->data);
	}
	
	int size() {
		Node *temp = head;
		int count=0;
		while(temp!=NULL){
			count++;
			temp=temp->next;
		}
		return count;	
	}
};

int main() {
	LinkedList LL;
	int no_of_ops;
	int type_of_op;
	int i_d;
	int i=-1;
	cin>>no_of_ops;
	int d[no_of_ops];

	while(no_of_ops>0) {
		cin>>type_of_op>>i_d;
		if(type_of_op== -9) {
			LL.add(i_d);			
		}
		else if(type_of_op== -6) {
			i++;
			d[i]=LL.get(i_d);			
		}
		else if(type_of_op== -1) {
			i++;
			d[i]=LL.remove(i_d);
		}
		else {
			LL.add(type_of_op, i_d);
		}
		no_of_ops--;
	}
	cout<<endl;
	for(int j=0;j<=i;j++){
		cout<<d[j]<<endl;
	}
	return 0;
}
