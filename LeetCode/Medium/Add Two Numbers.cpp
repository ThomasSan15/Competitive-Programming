//https://leetcode.com/problems/add-two-numbers/description/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        long long sum = 0;
        int n = 0;
        int carry = 0;
        ListNode* ptrAns = new ListNode();
        ListNode* curr = ptrAns;

        for(auto i = l1, j = l2; i != nullptr || j != nullptr; n++){
            if(j != nullptr){
           sum += j->val;
             j = j->next;
        }
         if(i != nullptr){
             sum += i->val;
             i = i->next;
        }
        sum += carry;
        if(sum > 9){
            carry = 1;
            sum %= 10;
        }else{
            carry = 0;
        }
        
        curr->next = new ListNode(sum);
        curr = curr->next;
        sum =0;
        }
        if(carry == 1){
            curr->next = new ListNode(carry);
        curr = curr->next;
        }

        return ptrAns->next? ptrAns->next : ptrAns;
    }
};