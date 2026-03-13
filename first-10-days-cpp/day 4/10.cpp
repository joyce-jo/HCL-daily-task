#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

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

void display(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void splitList(Node* head, Node*& head1, Node*& head2) {
    if (head == NULL || head->next == head) {
        head1 = head;
        head2 = NULL;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next->next == head)
        fast = fast->next;

    head1 = head;
    head2 = slow->next;

    fast->next = head2;
    slow->next = head1;
}

int main() {
    Node* head = NULL;
    Node* head1 = NULL;
    Node* head2 = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original Circular List: ";
    display(head);

    splitList(head, head1, head2);

    cout << "First Half: ";
    display(head1);

    cout << "Second Half: ";
    display(head2);

    return 0;
}