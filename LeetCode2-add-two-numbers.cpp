/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* newL = new ListNode(-1);
        ListNode * newLB = newL;
        unsigned short l1s = 0;
        unsigned short l2s = 0;
        short carry = 0;
        unsigned int sum;
        
        
        //0x0 == NULL
        
        
        while (l1 != 0x0 || l2 != 0x0){
            l1s = (l1 != 0x0) ? l1->val : 0x0;
            l2s = (l2 != 0x0) ? l2->val : 0x0;
            sum  = l1s+l2s + carry;
            if(sum > 9){
                newL->next = new ListNode(sum % 10);
                newL = newL->next;
                carry = 1;
            }
            else{
                newL->next = new ListNode(sum % 10);
                newL = newL->next;
                carry = 0;
            }
            l1 = (l1 != 0x0) ? l1->next : 0x0;
            l2 = (l2 != 0x0) ? l2->next : 0x0;
        }

        
        
        if(carry  == 1){
            newL->next = new ListNode(1);
        }
        return newLB->next;
    }
};
