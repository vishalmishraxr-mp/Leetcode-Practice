// Title: Maximum Depth of Binary Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

    int helper(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int a=0,b=0;
        if(root->left){
            a = helper(root->left);
        }
        if(root->right){
            b = helper(root->right);
        }

        return max(a,b)+1;
    }
    int maxDepth(TreeNode* root) {
        return helper(root);
    }
