/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return def(root,p,q);
    }
    
    TreeNode* def(TreeNode* cur, TreeNode* p, TreeNode* q) {
        if (cur == NULL) {
            return cur;
        }
        if (cur == p || cur == q) {
            return cur;
        }
        
        TreeNode* l = def(cur->left, p, q);
        TreeNode* r = def(cur->right,p, q);
        
        if(!l) return r;
        if(!r) return l;
        
        return cur;
    }
    
};