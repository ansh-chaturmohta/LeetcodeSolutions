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
        int sz=1;
        ListNode *temp=head;
        ListNode *prev=nullptr;
        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;
            sz++;
        }
        if(sz==n){
            head=head->next;
            return head;
        }
        else if(n==1){
            prev->next=nullptr;
            return head;
        }
        else{
            prev=head;
            temp=head;
            n=sz-n+1;
            for(int i=0;i<n-1;i++){
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            return head;
        }
    }
};