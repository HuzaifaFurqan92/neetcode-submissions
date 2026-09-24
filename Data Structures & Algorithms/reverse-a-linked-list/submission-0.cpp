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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp  != nullptr){
          count++;
            temp = temp->next;     
        }
        vector<int> res(count);
        int i =0;
        ListNode* temp2 = head;
        while (temp2 != nullptr){
            res[i] = temp2->val;
            temp2 = temp2->next;
            i++;     
        }
        int k = count - 1;
        for (int j = 0; j < count/2; j++){
            int temp = res[j];
            res[j] = res[k];
            res[k] = temp;
            k--;
        }
        int l = 0;
        ListNode* temp3 = head;
        while (temp3 != nullptr){
            temp3->val = res[l];
            temp3 = temp3->next;
            l++;     
        }

        return head;
    }
};
