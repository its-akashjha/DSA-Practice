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
        
//         if(root==p || root==q || root==NULL) return root;
        
//         TreeNode* le = lowestCommonAncestor(root->left, p, q);
//         TreeNode* rt = lowestCommonAncestor(root->right, p, q);
        
//         if(le==NULL) return rt;
//         else if(rt==NULL) return le;
//         else{
//             return root;
//         }
        
        if(root==NULL) return root;
        
        if(root->val>p->val && root->val>q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        if(root->val<p->val && root->val<q->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};