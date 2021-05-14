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
    ListNode* partition(ListNode* head, int x) {

        ListNode first(0);
        ListNode second(0);
        ListNode* lHead = &first;
        ListNode* rHead = &second;
        while(head!= NULL){
            if(head->val < x){
                lHead->next = head;
                lHead = lHead->next;
                cout<<head->val;
            }
            else{
                rHead->next = head;
                rHead = rHead->next;
                cout<<head->val;
            }
            head = head->next;
        }

        rHead->next = NULL;
        lHead->next = second.next;

        return first.next;


    }
};
