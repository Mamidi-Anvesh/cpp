#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    
    void deleteAtEnd() {
        
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        
        Node* temp = head;
        
        while (temp->next->next != head) {
            temp = temp->next;
        }

        Node* delNode = temp->next; 
        temp->next = head;          
        delete delNode;
    }

    
    void display() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to head)" << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);

    cll.display();

    cll.deleteAtEnd();

    cll.display();

    return 0;
}
