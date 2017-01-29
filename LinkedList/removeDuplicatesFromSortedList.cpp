/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* head = A;
    while(head!=NULL)
    {
       
      if(head->next!=NULL&&head->val==head->next->val)
      {
          head->next = head->next->next;
      }
      
      else{
          head = head->next;
      }
           
        
    }
    
    return A;
}
