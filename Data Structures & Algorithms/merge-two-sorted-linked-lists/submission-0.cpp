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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* temp1 = list1;
        vector<int> res;
        int i = 0;
        while (temp1-> next != nullptr) {
            res.push_back(temp1-> val);
            temp1 = temp1->next;
            i++;
        
        }
        temp1-> next =list2 ;
        while (temp1 != nullptr ){
           res.push_back(temp1-> val);
            temp1 = temp1->next;
            i++;
        } 
        
        sort (res.begin(),res.end());
        int j = 0;
        ListNode* temp2 = list1;
        while (temp2 != nullptr ){
            temp2->val = res[j];
            temp2 = temp2->next;
            j++;
        } 
        return list1;
    }
};
