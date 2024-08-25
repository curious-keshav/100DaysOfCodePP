class Solution {
public:
    vector<int> res;
    void func(TreeNode* root){
        if(!root){return;}
        func(root->left);
        func(root->right);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        func(root);
        return res;
    }
};