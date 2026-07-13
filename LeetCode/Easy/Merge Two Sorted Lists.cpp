//https://leetcode.com/problems/merge-two-sorted-lists/description/

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
        ListNode* ptrAns = new ListNode();
        ListNode* curr = ptrAns;

        for(auto i = list1, j = list2; i != nullptr || j != nullptr; ){
            if(i == nullptr){
                curr->next = new ListNode(j->val);
                curr = curr->next;
                j = j->next;
                continue;
            }

            if(j == nullptr){
                curr->next = new ListNode(i->val);
                curr = curr->next;
                i = i->next;
                continue;
            }

            if(i->val <= j->val){
                curr->next = new ListNode(i->val);
                curr = curr->next;
                i = i->next;
            }else{
                curr->next = new ListNode(j->val);
                curr = curr->next;
                j = j->next;
            }

        }  
         return ptrAns->next;             
    }
   
};