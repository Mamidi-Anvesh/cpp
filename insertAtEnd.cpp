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
	
	void insertAtEnd(int val){
		Node* newNode = new Node(val);
		if(head==NULL){
			head=tail=newNode;
			return;
		}
		else{
			tail->next = newNode;
			tail=newNode;
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
			cout<<"NULL"<<endl;
		}
	}
};

int main(){
	List ll;
	ll.insertAtEnd(10);
	ll.insertAtEnd(20);
	ll.insertAtEnd(30);
	ll.display();
	return 0; 
}

