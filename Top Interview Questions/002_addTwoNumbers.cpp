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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long int num1=0;
        long long int num2=0;
        long long int mul=1;
        ListNode* head1=l1;
        ListNode* head2=l2;
        int carry=0;
        int p1=0,p2=0;
        if(head1!=nullptr){
            p1=head1->val;
        }
        if(head2!=nullptr){
            p2=head2->val;
        }
        int num=p1+p2;
        if(num>9){
            carry=1;
            num=num%10;
        }
        ListNode* curr=new ListNode(num);
        ListNode* ret=curr;
        head1=head1->next;
        head2=head2->next;
        while(head1!=nullptr || head2!=nullptr){
            int p1=0,p2=0;
            if(head1!=nullptr){
                p1=head1->val;
            }
            if(head2!=nullptr){
                p2=head2->val;
            }
            num=p1+p2+carry;
            carry=0;
            if(num>9){
                carry=1;
                num=num%10;
            }
            ListNode* curr2=new ListNode(num);
            curr->next=curr2;
            curr=curr->next;
            if(head1!=nullptr){
            head1=head1->next;
            }
            if(head2!=nullptr){
            head2=head2->next;
            }
        }
        if(carry>0){
            ListNode* curr2=new ListNode(carry);
            curr->next=curr2;
        }
        return ret;
    }
};