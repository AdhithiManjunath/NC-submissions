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
        int len =0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            len++;
        }
        int val = len-n;
        if(val ==0)return head->next;
        int i=1;
        ListNode* t = head;
        while(i<val){
            i++;
            t = t->next;
        }
        if(t->next!=NULL){
        ListNode* tt = t->next;
        t->next = tt->next;
        tt->next = NULL;
        }
        return head;
    }
};
