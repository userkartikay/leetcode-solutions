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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;
        ListNode* p1=head;
        ListNode* p2=head;
        int i=0;
        while(p2){
            if(i==n){
                break;
            }
            p2=p2->next;
            i++;
        }
        if(p2==NULL && i<n) return head;
        else if(p2==NULL && i==n){
            ListNode* temp=head;
            head=temp->next;
            delete temp;
            return head;

        }
        while(p2->next){
            p2=p2->next;
            p1=p1->next;
        }
        ListNode* p3=p1->next;
        p1->next=p3->next;
        delete p3;
        return head;

        
    }
};