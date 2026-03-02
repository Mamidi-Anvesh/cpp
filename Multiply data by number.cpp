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
		void insertAtBegining(int value){
      		Node* newNode=new Node();
     		newNode->data =value;
      		newNode->next= head;
      		head=newNode;
  		}
		void display(){
			Node* temp=head;
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next	;
			}
			cout<<"END\n";
		}
		void multiply(int value){
			Node* temp=head;
			while(temp!=NULL){
				temp->data=value*(temp->data);
				temp=temp->next;
			}
		}
};
int main(){
	linkedlist L1;
	L1.insertAtEnd(30);
	L1.insertAtBegining(60);
	L1.insertAtEnd(42);
	cout<<"before\n";
	L1.display();
	int M;
	cout<< "enter multipler";
	cin>>M;
	cout<<"after\n";
	L1.display();
	return 0;
}
