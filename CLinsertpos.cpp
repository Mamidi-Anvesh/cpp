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

    
    void insertAtPosition(int val, int pos) {
        Node* newNode = new Node(val);

        
        if (head == NULL) {
            if (pos == 1) {
                head = newNode;
                newNode->next = head;
            } else {
                cout << "Invalid position!" << endl;
            }
            return;
        }


        if (pos == 1) {
            Node* temp = head;

            
            while (temp->next != head) {
                temp = temp->next;
            }

            newNode->next = head;
            temp->next = newNode;
            head = newNode;
            return;
        }

        
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;

            
            if (temp->next == head && i < pos - 2) {
                cout << "Position out of range!" << endl;
                return;
            }
        }

        newNode->next = temp->next;
        temp->next = newNode;
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

    cll.insertAtPosition(10, 1);
    cll.insertAtPosition(20, 2);
    cll.insertAtPosition(30, 3);
    cll.insertAtPosition(25, 3); 

    cll.display();

    return 0;
}
