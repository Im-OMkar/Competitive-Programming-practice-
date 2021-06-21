class Solution {
public:
    int res= INT_MIN;
    int Helper(TreeNode* root) {
        if (root == NULL) return 0;
        int l = Helper(root->left);
        int r = Helper(root->right);
        int temp = max(root->val + max(l, r), root->val);
        int ans = max(temp, l + r + root->val);
        res = max(res, ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        Helper(root);
        return res;
    }
};