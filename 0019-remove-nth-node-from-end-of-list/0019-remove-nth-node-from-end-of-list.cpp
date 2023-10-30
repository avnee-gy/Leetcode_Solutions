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
        ListNode *start =  new ListNode(0, head);
        ListNode *slow = start, *fast = start;
        if(!head->next) head = NULL;
        else{
            head = start;
            for(int i=1;i<=n;i++){
                fast = fast->next;
            }
            while(fast && fast->next){
                fast = fast->next;
                slow = slow->next;
            }
            // if(fast->next) fast = fast->next;
            // cout<<slow->val;

            slow->next = slow->next->next;
            head = head->next;
        }

        return head;
    }
};