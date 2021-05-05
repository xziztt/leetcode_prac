 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *temp1 = l1,*temp2 = l2,*tail = nullptr,*head = nullptr;
        int carry = 0;
        int curr_sum = 0;
        while(temp1!=nullptr || temp2 != nullptr){

            if(temp1!=nullptr){
                curr_sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2!= nullptr){

                curr_sum += temp2->val;
                temp2 = temp2->next;
            }

            ListNode *temp = new ListNode(curr_sum%10);
            carry = curr_sum/10;
            if(head == nullptr){
                head = temp;
                tail = temp;
            }else{

                tail->next = temp;
                tail = temp;
            }

            curr_sum = carry;
            
        }






        
    }
};