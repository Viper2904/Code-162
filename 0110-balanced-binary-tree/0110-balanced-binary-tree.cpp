class Solution {
public:
    pair<bool, int> isBalancedF(TreeNode* root) {
        if (root == NULL) {
            return make_pair(true, 0);
        }

        pair<bool, int> left = isBalancedF(root->left);
        pair<bool, int> right = isBalancedF(root->right);

        bool l = left.first;
        bool r = right.first;
        bool d = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        ans.first = l && r && d;

        return ans;
    }

    bool isBalanced(TreeNode* root) {
        return isBalancedF(root).first;
    }
};
