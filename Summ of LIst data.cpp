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
		int listsum(){
			int sum=0;
			Node* temp=head;
			
			while(temp!=NULL)
			{
				sum+=temp->data;
				temp=temp->next;
			}
			return sum;
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
	linkedlist L1;
	L1.insertAtEnd(3);
	L1.insertAtEnd(7);

	L1.display();
	cout<<L1.listsum();
	return 0;
}
