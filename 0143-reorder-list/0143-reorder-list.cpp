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
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        if(fast->next) fast = fast->next;
        // cout<<slow->val<<fast->val;
        ListNode *temp = NULL;
        while(slow){
            fast = slow->next;
            slow->next = temp;
            temp = slow;
            slow = fast;
            // cout<<slow->val;
        }

        slow = temp;
        // cout<<slow->next->val;
        while(head && slow){
            temp = head->next;
            head->next = slow;
            fast = slow->next;
            slow->next = temp;
            head = temp;
            slow = fast;
        }

    }
};