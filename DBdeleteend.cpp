#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
    
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        
        while (temp->next != NULL) {
            temp = temp->next;
        }

        
        temp->prev->next = NULL;
        delete temp;
    }

    
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();  

    list.deleteAtEnd();

    list.display();  

    return 0;
}
