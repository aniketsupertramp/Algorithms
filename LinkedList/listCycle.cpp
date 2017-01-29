/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* slow = A;
    ListNode* fast = A;
    int i=0;
    while(slow!=fast||(i==0))
    {i=1;
        if(fast->next==NULL||fast->next->next==NULL)
          {
              return NULL;
          }
          
         slow = slow->next;
         fast = fast->next->next;
    }
    
    slow = A;
    while(fast!=slow)
    {
        fast = fast->next;
        slow = slow->next;
        
    }
    
    return slow;
    
}
