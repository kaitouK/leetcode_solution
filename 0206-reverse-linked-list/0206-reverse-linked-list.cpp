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
        stack<int> st;
        ListNode *node=head;
        while(node){
            st.push(node->val);
            node=node->next;
        }
        node=head;
        while(node){
            node->val=st.top();
            st.pop();
            node=node->next;
        }
        return head;
    }
};