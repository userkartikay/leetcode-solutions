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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast &&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=NULL;
        while(slow){
            ListNode* forward=slow->next;
            slow->next=prev;
            prev=slow;
            slow=forward;
        }
        ListNode* p1=head;
        while(prev){
            if(prev->val!=p1->val) return false;
            p1=p1->next;
            prev=prev->next;
        }
        return true;
    }
   
        
    
};