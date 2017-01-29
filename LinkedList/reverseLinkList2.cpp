/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* p = A;
    ListNode* q = A;
    
    long long int c=0;
    
    if(A==NULL||A->next==NULL)
    {
        return A;
    }
    
    while(c<n-1)
    {
        p = p->next;
        c++;
    }
    c=0;
    while(c<m-2)
    {
        c++;
        q = q->next;
    }
    
   // ListNode* l = q->next;
   ListNode* temp;
   if(m>1)
   {
       temp = q->next;
    
    q->next = p;
   }
   else{
       temp = q;
   }
    
    ListNode* prev = p->next;
    
    while(temp!=p)
    {
        ListNode* k = temp->next;
        temp->next = prev;
        prev = temp;
        temp = k;
        
        
    }
    
    temp->next = prev;
    if(m==1)
    {
     A = temp;   
    }
    
    return A;
    
    
}
