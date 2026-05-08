/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* helper(const vector<int>& preorder, const vector<int>& inorder, unordered_map<int, int>& mp, int l, int r, int& i){
        if(l>r){
            return NULL;
        }
        int val = preorder[i++];
        TreeNode* node = new TreeNode(val);
        int mid = mp[val];

        node->left = helper(preorder , inorder , mp , l , mid-1 ,i );
        node->right = helper(preorder , inorder , mp , mid+1 , r , i );

        return node ;


    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int,int> mp;
        for(int i =0 ; i < inorder.size();i++){
            mp[inorder[i]] = i ;
        }
        int i = 0 ;
        return helper(preorder , inorder , mp , 0 , inorder.size()-1 , i);
        
    }
};
