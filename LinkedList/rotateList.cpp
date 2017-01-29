/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
   ListNode* head  = A;
   
   long long int n,c;
   c=0;
   
   while(head!=NULL)
   {
       head=head->next;
       c++;
   }
   
   if(B>c)
   {
     B = B%c;  
   }
   
   n = c-B;
   
   if(n<=0||B==0)
   {
       return A;
   }
   c=0;
   head = A;
   while(c<n-1)
   {
       head = head->next;
       c++;
   }
   
   ListNode* temp = head->next;
   head->next=NULL;
   head = temp;
   while(temp->next!=NULL)
   {
       temp = temp->next;
   }
   
   temp->next = A;
   
   return head;
   
}
