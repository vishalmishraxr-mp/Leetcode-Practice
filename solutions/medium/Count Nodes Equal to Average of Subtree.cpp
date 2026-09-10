// Title: Count Nodes Equal to Average of Subtree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/

        if (sum / count == root->val) {
            ans++;
        }
        int count = 1 + left.second + right.second;
        int sum = root->val + left.first + right.first;

        auto right = solve(root->right, ans);
        auto left = solve(root->left, ans);
        }
            return {0, 0};
        return {sum, count};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
