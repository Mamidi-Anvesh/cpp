#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class linkedlist{
	private :
		Node* head;
	public:
		linkedlist(){
			head=nullptr;
		}
		void insertAtBegining(int value){
			Node* newNode=new Node();
			newNode->data=value;
			newNode->next=head;
			head=newNode;
		}
};
int main()
{
	linkedlist list;
	
	list.insertAtBegining(10);
	
	
}





