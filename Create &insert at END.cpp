#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class linkedlist{
	private:
		Node* head;
	public:
		linkedlist(){
			head=NULL;
		}
		void insertAtEnd(int value){
			Node* newNode=new Node();
			newNode->data=value;
			newNode->next=NULL;
			if(head==NULL){
				head=newNode;
				return;
			}
			Node* temp=head;
			while (temp->next!=NULL){
				temp=temp->next;
			}			
			temp->next=newNode;
			}
		void display(){
			Node* temp=head;
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next	;
			}
			cout<<"END";
		}
};
int main(){
	linkedlist L1;
	L1.insertAtEnd(30);
	L1.insertAtEnd(4);
	L1.insertAtEnd(42);
	L1.display();
	return 0;
}
