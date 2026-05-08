class Solution {
public:

    int solve(TreeNode* node , int& max_sum){

        if (node == nullptr) {     
            return 0;
        }

        int leftGain  = max(solve(node->left, max_sum), 0);
        int rightGain = max(solve(node->right, max_sum), 0);

  
        int currentPath = leftGain + rightGain + node->val;
        max_sum = max(max_sum, currentPath);

        return node->val + max(leftGain, rightGain);

    }

    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN ;
        solve(root ,maxSum);

        return maxSum ;
    }
};
