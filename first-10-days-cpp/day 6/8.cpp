#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left, *right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};

TreeNode *first=NULL,*second=NULL,*prevNode=NULL;

void inorder(TreeNode* root){

    if(!root) return;

    inorder(root->left);

    if(prevNode && root->val < prevNode->val){

        if(!first)
            first = prevNode;

        second = root;
    }

    prevNode = root;

    inorder(root->right);
}

void recoverTree(TreeNode* root){

    inorder(root);

    swap(first->val, second->val);
}

void printInorder(TreeNode* root){
    if(!root) return;

    printInorder(root->left);
    cout<<root->val<<" ";
    printInorder(root->right);
}

int main(){

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);

    recoverTree(root);

    cout<<"Corrected BST Inorder: ";
    printInorder(root);

    return 0;
}
