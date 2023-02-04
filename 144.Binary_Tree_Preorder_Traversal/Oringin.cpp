class Solution {
public:
    vector<int> result;

    vector<int> preorderTraversal(TreeNode *root) {
        Traversal(root);
        return result;
    }

    void Traversal(TreeNode *root) {
        if (root == NULL) return;
        result.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
    }


};
