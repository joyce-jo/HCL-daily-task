#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,*right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};

void flatten(TreeNode* root){

    if(!root) return;

    flatten(root->left);
    flatten(root->right);

    TreeNode* temp = root->right;

    root->right = root->left;
    root->left = NULL;

    TreeNode* curr = root;

    while(curr->right)
        curr = curr->right;

    curr->right = temp;
}

void print(TreeNode* root){

    while(root){
        cout<<root->val<<" ";
        root = root->right;
    }
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    flatten(root);

    print(root);

    return 0;
}
