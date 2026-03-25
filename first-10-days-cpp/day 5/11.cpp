#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int height(Node* root) {
    if (root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}

bool isBalanced(Node* root) {
    if (root == NULL) return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (abs(leftHeight - rightHeight) > 1)
        return false;

    return isBalanced(root->left) && isBalanced(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Height of tree = " << height(root) << endl;

    if (isBalanced(root))
        cout << "Tree is height balanced";
    else
        cout << "Tree is not height balanced";

    return 0;
}