#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* reverseEven(Node* head){

    if(!head) return head;

    vector<int> even;

    Node* temp = head;
    int idx = 0;

    while(temp){

        if(idx % 2 == 0)
            even.push_back(temp->data);

        temp = temp->next;
        idx++;
    }

    reverse(even.begin(), even.end());

    temp = head;
    idx = 0;
    int i = 0;

    while(temp){

        if(idx % 2 == 0)
            temp->data = even[i++];

        temp = temp->next;
        idx++;
    }

    return head;
}

void print(Node* head){

    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head = reverseEven(head);

    print(head);

    return 0;
}
