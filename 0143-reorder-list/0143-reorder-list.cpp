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
        ListNode *fast = head, *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *curr = slow->next, *prev = nullptr, *next = nullptr;
        slow->next = nullptr;
        // reverse linked list
        while (curr) {
            next = curr->next; // store next
            curr->next = prev; // make next prev
            prev = curr;       // make prev curr
            curr = next;       // make curr next
        }
        curr = head;
        ListNode *first = head, *second = prev, *next1 = nullptr,
                 *next2 = nullptr;
        // merge 2 lists
        while (first && second) {
            next1 = first->next; // store next
            next2 = second->next;
            first->next = second; // merge
            second->next = next1;
            first = next1;  // move down 1st list node
            second = next2; // move down 2nd list node
        }
    }
};