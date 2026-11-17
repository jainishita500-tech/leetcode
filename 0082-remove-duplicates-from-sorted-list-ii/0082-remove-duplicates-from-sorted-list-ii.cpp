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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==nullptr || head->next==nullptr)
        return head;
        bool a=true;
        ListNode dummy;
        dummy.next=head;
        ListNode* prev= &dummy;
        ListNode* curr=head;
        ListNode* nextnode=head;
        while(nextnode!=nullptr){
            curr=nextnode;
            prev->next=nextnode;
            nextnode=nextnode->next;
            while(nextnode!=nullptr && curr->val==nextnode->val){
                nextnode=nextnode->next;
                a=false;
            }
            if (a){
                prev=prev->next;
            }
            a=true;

        }
        prev->next=nextnode;
        return dummy.next;
        
    }
};