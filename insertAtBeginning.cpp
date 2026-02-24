#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	
	Node(int val){
		data=val;
		next=NULL;
	}
};

class List{
	Node* head;
	Node* tail;
	
public:
	List(){
		head=tail=NULL;
	}
	
	void insertAtBeginning(int val){
		Node* newNode = new Node(val);
		if(head==NULL){
			head = tail = newNode;
			return;
		}
		else{
			newNode->next = head;
			head = newNode;
		}
	}
	
	void display(){
		if(head==NULL){
			cout<<"List is empty"<<endl;
			return;
		}
		else{
			Node* temp = head;
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
			}
		}
	}
};

int main(){
	int val;
	List l;
	l.insertAtBeginning(10);
	l.insertAtBeginning(8);
	l.insertAtBeginning(6);
	l.display();
	return 0;
}

