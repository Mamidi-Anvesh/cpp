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

    
    void insertAtPosition(int value, int pos) {
        Node* newNode = new Node(value);

        
        if (pos == 1) {
            if (head != NULL) {
                head->prev = newNode;
                newNode->next = head;
            }
            head = newNode;
            return;
        }

        Node* temp = head;

        
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        
        if (temp == NULL) {
            cout << "Invalid Position!" << endl;
            return;
        }

        
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
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

    list.insertAtPosition(10, 1);
    list.insertAtPosition(20, 2);
    list.insertAtPosition(30, 3);
    list.insertAtPosition(25, 3);  

    list.display();  

    return 0;
}
