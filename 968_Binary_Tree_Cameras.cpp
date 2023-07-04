class Solution {
public:
    int traverse(TreeNode* node, int& result) {
        if (node == NULL) {
            return -1;
        }
        int left = traverse(node->left, result);
        int right = traverse(node->right, result);
        
        int status;
        if (left == -1) {
            if (right == -1) {
                status = 0;
            } else if (right == 0) {
                result++;
                status = 1;
            } else {
                status = -1;
            }
        } else if (left == 0) {
            result++;
            status = 1;
        } else {
            if (right == -1) {
                status = -1;
            } else if (right == 0) {
                result++;
                status = 1;
            } else {
                status = -1;
            }
        }
        
        return status;
    }
    
    int minCameraCover(TreeNode* root) {
        int result = 0;
        int status = traverse(root, result);
        if (status == 0) {
            result++;
        }
        return result;
    }
};
