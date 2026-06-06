/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1=headA;
        ListNode* p2=headB;
        int l1=0,l2=0;
        while(p1 || p2){
            if(p1!=NULL){
                l1++;
                p1=p1->next;
                }
            if(p2!=NULL){
                l2++;
                p2=p2->next;}

        }
        p1=headA;
        p2=headB;
        int d=abs(l1-l2);
        if(l1>l2){
            while(d--) p1=p1->next;
        }
        else{
            while(d--) p2=p2->next;
        }
        while(p1 && p2){
                if(p1==p2) return p1;
                p1=p1->next;
                p2=p2->next;
        }
        return nullptr;
        
        
    }
};