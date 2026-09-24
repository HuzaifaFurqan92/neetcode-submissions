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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if ( root == nullptr) return {};
        vector<vector<int>> ans;
       
        queue<TreeNode*> q;
        q.push(root);
        

        while(!q.empty()){
            int levelSize = q.size();
            vector<int> currentLevel;

            for ( int i = 0 ; i  < levelSize; i++){
            TreeNode* curr= q.front();
            q.pop();
           
            currentLevel.push_back(curr->val);

           //This left and right are children for next level;
            if(curr->left){q.push(curr->left);}
            if(curr->right){ q.push(curr->right);}

            }
       ans.push_back(currentLevel);
        }
         return ans;
    }
};
