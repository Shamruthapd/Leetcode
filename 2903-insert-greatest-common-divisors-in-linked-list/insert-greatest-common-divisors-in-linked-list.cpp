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
    ListNode* gcd(int num1,int num2){

        while (num2 != 0) {
            int t = num2;
            num2 = num1 % num2;
            num1 = t;
        }
        return new ListNode(num1);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            slow->next=gcd(slow->val,fast->val);
            slow->next->next=fast;
            slow=slow->next->next;
        }
        return temp;
    }
};