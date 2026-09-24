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
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr) return -1;
        
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;

        while( !q.empty()){
            TreeNode* curr = q.front();
            res.push_back(curr->val);
            q.pop();

            if(curr->left){
                q.push(curr->left);
                
            } 
            if(curr->right){
                q.push(curr->right);
        
            }
        }
        sort(res.begin(),res.end());

        return res[k-1];
    }
};
