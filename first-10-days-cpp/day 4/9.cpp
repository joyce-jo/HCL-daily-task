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
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* mergeLists(Node* l1, Node* l2) {
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    return dummy.next;
}

int main() {
    Node* list1 = NULL;
    Node* list2 = NULL;

    insert(list1, 1);
    insert(list1, 3);
    insert(list1, 5);

    insert(list2, 2);
    insert(list2, 4);
    insert(list2, 6);

    cout << "List 1: ";
    display(list1);

    cout << "List 2: ";
    display(list2);

    Node* merged = mergeLists(list1, list2);

    cout << "Merged list: ";
    display(merged);

    return 0;
}