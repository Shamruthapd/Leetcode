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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newNode = new ListNode(0);
        ListNode* dummy=newNode;
        
        ListNode* temp=head->next;
        int s=0;
        while(temp!=NULL){
            if(temp->val!=0){
                s+=temp->val;
            }
            else{
                ListNode* Node = new ListNode(s);
                dummy->next=Node;
                dummy=dummy->next;
                s=0;
            }
            temp=temp->next;
        }
        return newNode->next;
    }
};