/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *head = A;
    long long int c=0;
    while(head!=NULL)
    {
          head = head->next;
          c++;
    }
    
    long long int n = c - B;
    c=0;
    head = A;
    
    if(n<=0)
      {
          head = head->next;
          return head;
      }
     
    while(c<n-1)
    {   head = head->next;
        c++;
    }
    
    head->next = head->next->next;
    
    return A;
    
}
