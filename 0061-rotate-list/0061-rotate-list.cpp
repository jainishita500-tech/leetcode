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
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* temp3;
        int count=0;
        if(head==nullptr){
            return head;
        }
        while(temp1!=nullptr){
            temp1=temp1->next;
            count++;
        }
        int i=k%count;
        if(i==0)
        return head;
        int j=0;
        temp1=head;
        i=count-i-1;
        while(j<i){
            temp2=temp2->next;
            j++;
        }
        temp1=temp2->next;
        temp3=temp2;
        while(temp3->next!=nullptr){
            temp3=temp3->next;
        }
        temp3->next=head;
        temp2->next=nullptr;
        return temp1;

        
    }
};