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
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* dummy = new ListNode();
        dummy->next=head;
        int count=0;
        while(temp1->next!=nullptr){
            temp1=temp1->next;
            count++;
        }
        count++;
        if(count==n){
            dummy->next=head->next;
            return dummy->next;
        }
        int j=count-n-1;
        int i=0;
        while(i<j){
            temp2=temp2->next;
            i++;
        }
        temp2->next=temp2->next->next;
        return dummy->next;

        
    }
};