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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head ||!head->next) return head;

        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev =&dummy;

        while(true){
            ListNode* temp=prev;
            int c=0;
            while(c<k && temp){
                temp=temp->next;
                c++;
            }
            if(!temp) break;

            ListNode* a=prev->next;
            ListNode* curr=a->next;
            int i=1;
            while(i<k){
                ListNode* next=curr->next;
                curr->next=prev->next;
                prev->next=curr;
                curr=next;
                i++;


            }
            a->next = curr;
            prev = a;
        }
        return dummy.next;

        

        
    }
};