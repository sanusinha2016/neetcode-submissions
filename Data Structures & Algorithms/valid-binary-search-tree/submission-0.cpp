class Solution {
public:
    bool isValidBSTHelper(TreeNode* root, long long minVal, long long maxVal) {
        // Base case: null node valid hota hai
        if (root == nullptr) {
            return true;
        }
        
        // Current node range ke bahar hai toh invalid
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }
        
        // Left subtree: sab values < root->val hone chahiye
        // Right subtree: sab values > root->val hone chahiye
        bool leftValid  = isValidBSTHelper(root->left,  minVal, root->val);
        bool rightValid = isValidBSTHelper(root->right, root->val, maxVal);
        
        return leftValid && rightValid;
    }
    
    bool isValidBST(TreeNode* root) {
        // Root call karte waqt range bahut wide rakho
        // long long use kar rahe taaki INT_MIN/INT_MAX ke edge cases handle ho
        return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX);
    }
};