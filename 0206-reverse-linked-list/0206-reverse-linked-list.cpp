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
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)return head; // base case : no more next pointer or current pointer is null
        ListNode* prev=reverseList(head->next); // get next pointer first 
        head->next->next=head; // 1->2 becomes 1->2->1
        head->next=nullptr; // disconnect 1->2, leave 2->1 only
        return prev;
    }
};