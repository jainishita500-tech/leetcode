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
        if(head==nullptr)
        return nullptr;
        ListNode* check=head;
        int count=0;
        while(check!=nullptr && count<k){
            check=check->next;
            count++;
        }
        if(count<k)
        return head;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* Nextnode=curr->next;
        count=0;
        while(curr!=nullptr && count<k){
            Nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Nextnode;
            count++;
            }
            if(Nextnode!=nullptr){
                head->next=reverseKGroup(Nextnode,k);
            }
        return prev;
    }
};