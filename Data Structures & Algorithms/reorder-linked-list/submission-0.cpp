/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        while (temp != nullptr){
            res.push_back(temp->val);
            temp = temp->next;
        }

       int i = 0;
       int j = res.size() - 1;
       vector<int> res2;
       for (int k = 0; k < res.size(); k++){
        if ( k % 2 == 0) {
            res2.push_back(res[i]);
            i++;  
       }else{
        res2.push_back(res[j]);
            j--;  
       } 
    }
    ListNode* temp2 = head;
    int l = 0 ;
        while (temp2 != nullptr){
            temp2->val = res2[l];
            temp2 = temp2->next;
            l++;
        }
      
    }

};
