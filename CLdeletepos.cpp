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

    void deleteAtPosition(int pos) {
        
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        
        if (head->next == head) {
            if (pos == 1) {
                delete head;
                head = NULL;
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

            Node* delNode = head;
            temp->next = head->next;
            head = head->next;
            delete delNode;
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

        Node* delNode = temp->next;

        
        if (delNode == head) {
            cout << "Position out of range!" << endl;
            return;
        }

        temp->next = delNode->next;
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
    cll.insertAtEnd(40);

    cll.display();

    cll.deleteAtPosition(3); 

    cll.display();

    return 0;
}
