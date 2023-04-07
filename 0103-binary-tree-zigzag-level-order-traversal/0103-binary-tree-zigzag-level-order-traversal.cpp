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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>zig;
        if(root==NULL) return zig;
        queue<TreeNode*>q;
        q.push(root);
        int flag=0;
        while(!q.empty()){
            
            int size = q.size();
            vector<int>ans(size);
            for(int i=0;i<size;i++){
                TreeNode*curr = q.front();
                q.pop();
                if(flag%2!=0){
                    int index = size-1-i;
                    ans[index]=curr->val;
                }
                else{
                    ans[i]=curr->val;
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                  
            }
            flag++; 
            zig.push_back(ans);
        }
        return zig;
    }
};