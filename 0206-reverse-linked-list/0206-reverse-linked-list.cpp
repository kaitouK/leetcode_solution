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
        if(!head)return nullptr;
        stack<ListNode*> st;
        ListNode *node=head;
        while(node){
            st.push(node);
            node=node->next;
        }
        node=st.top();
        head=st.top();
        st.pop();
        while(!st.empty()){
            node->next=st.top();
            node=st.top();
            st.pop();
        }
        node->next=nullptr;
        return head;
    }
};