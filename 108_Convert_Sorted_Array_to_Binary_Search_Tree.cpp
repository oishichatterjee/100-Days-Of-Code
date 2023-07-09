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
    
    TreeNode* buildTree(int left, int right, vector<int>& sortedNums) {
        
        if (left > right) {
            return nullptr;
        }
        
        int mid = left + (right - left) / 2;
        
        TreeNode* root = new TreeNode(sortedNums[mid]);
        root->left = buildTree(left, mid - 1, sortedNums);
        root->right = buildTree(mid + 1, right, sortedNums);
        
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return buildTree(0, nums.size() - 1, nums);
    }
};
