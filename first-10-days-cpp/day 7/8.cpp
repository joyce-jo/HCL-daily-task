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

int dfs(TreeNode* root,int sum){

    if(!root) return 0;

    sum = sum*10 + root->val;

    if(!root->left && !root->right)
        return sum;

    return dfs(root->left,sum) + dfs(root->right,sum);
}

int sumNumbers(TreeNode* root){
    return dfs(root,0);
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    cout<<"Sum Root to Leaf: "<<sumNumbers(root);

    return 0;
}
