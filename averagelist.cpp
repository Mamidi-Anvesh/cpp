#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
};
void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


double findAverage(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return 0;
    }

    Node* slow = head;
    Node* fast = head;
    Node* temp = head;

    int first = head->data;
    int last;


    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    int middle = slow->data;


    while (temp->next != NULL) {
        temp = temp->next;
    }
    last = temp->data;

    return (first + middle + last) / 3.0;
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(head, value);
    }

    double average = findAverage(head);
    cout << "Average of first, middle and last elements: " << average << endl;

    return 0;
}
