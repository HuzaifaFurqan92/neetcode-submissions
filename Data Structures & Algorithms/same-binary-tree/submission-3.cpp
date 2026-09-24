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
      bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        else if (  p == nullptr || q == nullptr) return false;
       TreeNode* root_p = p;
       TreeNode* root_q = q;

       queue<TreeNode*> p_q;
       p_q.push(root_p);
       vector<int> pq;

       while(!p_q.empty()){
        TreeNode* curr = p_q.front();
        pq.push_back(curr->val);
        p_q.pop();

        if(curr->left) {
             p_q.push(curr->left);
             pq.push_back(curr->left->val);
               }else{
                pq.push_back(INT_MAX);
               }
        
        if(curr->right) {
             p_q.push(curr->right);
             pq.push_back(curr->right->val);
               }else{
                pq.push_back(INT_MAX);
               }
       }

        queue<TreeNode*> q_q;
       q_q.push(root_q);
       vector<int> qq;

       while(!q_q.empty()){
        TreeNode* curr = q_q.front();
        qq.push_back(curr->val);
        q_q.pop();

        if(curr->left) {
             q_q.push(curr->left);
             qq.push_back(curr->left->val);
               }else{
                qq.push_back(INT_MAX);
               }
        
        if(curr->right) {
             q_q.push(curr->right);
             qq.push_back(curr->right->val);
               }
               else{
                qq.push_back(INT_MAX);
               }
       }

       if (pq.size() != qq.size()) return false;
       for (int i = 0; i < pq.size();i++ ){
        if (pq[i] != qq[i] ) return false;
       
       }
        return true;
    }
};
