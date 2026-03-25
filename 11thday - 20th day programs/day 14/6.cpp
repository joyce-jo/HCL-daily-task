#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

bool detectAndRemoveCycle(Node* head) {

    Node *slow = head, *fast = head;

    while (fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {

            slow = head;

            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }

            fast->next = NULL; 
            return true;
        }
    }

    return false;
}

void printList(Node* head) {

    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main() {

    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    
    head->next->next->next->next = head->next;

    if (detectAndRemoveCycle(head))
        cout << "Cycle detected and removed\n";
    else
        cout << "No cycle\n";

    cout << "Linked List: ";
    printList(head);

}