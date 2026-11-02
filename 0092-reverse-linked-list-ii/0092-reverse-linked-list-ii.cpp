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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        return head;
        ListNode* dummy= new ListNode();
        dummy->next=head;
        ListNode* temp=dummy;
        ListNode* prev=dummy;
        ListNode* curr;
        ListNode* nextnode;
        ListNode* leftnode;
        int i =0;
        while(i<left-1){
            temp=temp->next;
            i++;
        }
        prev=temp->next;
        curr=prev->next;
        leftnode=prev;
        int j=left;
        while(j<right){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            j++;
        }
        leftnode->next=nextnode;
        temp->next=prev;
        return dummy->next;
        
    }
};