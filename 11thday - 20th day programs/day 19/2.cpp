#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;

    Node(char c, int f) {
        ch = c;
        freq = f;
        left = NULL;
        right = NULL;
    }
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

void printCodes(Node* root, string code) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        cout << root->ch << " : " << code << endl;
    }

    printCodes(root->left, code + "0");
    printCodes(root->right, code + "1");
}

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> chars(n);
    vector<int> freq(n);

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    cout << "Enter frequencies: ";
    for (int i = 0; i < n; i++) {
        cin >> freq[i];
    }

    priority_queue<Node*, vector<Node*>, Compare> pq;

    for (int i = 0; i < n; i++) {
        pq.push(new Node(chars[i], freq[i]));
    }

    while (pq.size() > 1) {
        Node* leftNode = pq.top();
        pq.pop();

        Node* rightNode = pq.top();
        pq.pop();

        Node* newNode = new Node('$', leftNode->freq + rightNode->freq);
        newNode->left = leftNode;
        newNode->right = rightNode;

        pq.push(newNode);
    }

    Node* root = pq.top();

    cout << "Huffman Codes:" << endl;
    printCodes(root, "");

    return 0;
}