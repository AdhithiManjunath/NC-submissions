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
        int p1=0,p2=0;
        int num1=0, num2=0;
        while(l1){
            num1 = num1+ (l1->val * pow(10,p1));
            p1++;
            l1 = l1->next;
        }
        while(l2){
            num2 = num2+ (l2->val * pow(10,p2));
            p2++;
            l2 = l2->next;
        }
        int sum = num1+ num2;
        string ans = to_string(sum);
        reverse(ans.begin(), ans.end());
        ListNode* head = new ListNode(ans[0]-'0');
        ListNode* temp = head;
        for(int i=1; i<ans.size(); i++){
            ListNode* t = new ListNode(ans[i]-'0');
            temp->next = t;
            temp = t;
        }
        return head;
        

    }
};
