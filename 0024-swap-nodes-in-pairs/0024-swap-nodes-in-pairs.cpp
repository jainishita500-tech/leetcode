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
    ListNode* swapPairs(ListNode* head) {
        if (head==nullptr || head->next==nullptr)
        return head;
        ListNode* temp1;
        ListNode* temp2;
        ListNode* dummy = new ListNode();
        dummy->next=head;
        ListNode* prev = dummy ;
        while(prev->next!=nullptr && prev->next->next!=nullptr){
            temp1=prev->next;
            temp2=temp1->next;
            temp1->next=temp2->next;
            temp2->next=temp1;
            prev->next=temp2;
            prev=temp1;
        }
        return dummy->next;
        
    }
};