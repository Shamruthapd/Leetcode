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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t2->next!=NULL){
            t2=t2->next;
        }
        int c=0;
        int d=b-a+1;
        while(t1!=NULL){
            c++;
            if (c==a){
                ListNode* t3=t1;
                for(int i=0;i<=d;i++){
                    t3=t3->next;
                }
                t1->next=list2;
                t2->next=t3;
                break;
            }
            t1=t1->next;
            
        }
        return list1;
    }
};