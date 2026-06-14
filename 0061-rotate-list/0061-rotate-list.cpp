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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head ||!head->next) return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next){
            tail=tail->next;
            len++;
        }

        tail->next=head;
        k=k%len;
        int m=len-k;
        while(m>0){
            tail=tail->next;
            m--;
        }
        head=tail->next;
        tail->next=NULL;
        return head;

        
    }
};