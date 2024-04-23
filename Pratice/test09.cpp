#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
         if(root==NULL) return 0;

         int l=maxDepth(root->left);
         int r=maxDepth(root->right);


         return max(l,r)+1;
    }
};



int main() {
    // Construct the binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Create an instance of the Solution class
    Solution solution;

    // Calculate the maximum depth of the binary tree
    int depth = solution.maxDepth(root);

    // Display the maximum depth of the binary tree
    cout << "Maximum Depth of Binary Tree: " << depth << endl;

    // Free the memory allocated for the binary tree
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
