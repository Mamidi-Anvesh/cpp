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
			cout<<"END\n";
		}
};
int main(){
	int i=0;
	linkedlist L[10];
	while(i<3){
	
	L[i].insertAtEnd(i+5);
	L[i].insertAtEnd(i+2);
	L[i].display();
	i++;
	}
	return 0;
}
