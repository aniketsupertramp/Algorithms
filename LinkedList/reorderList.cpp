/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* p = A;
    ListNode* q = A;
   long long int c=0,mid;
    if(A==NULL||A->next==NULL||A->next->next==NULL)
     {
         return A;
     }
   
    while(p!=NULL)
    {
        c++;
        p = p->next;
    }
    
    mid = c/2;
    c=0;
    p = A;
    while(c<mid-1)
    {
        c++;
        p = p->next;
    }
    
    ListNode* h = p->next;
    p->next = NULL;
    
    //reverse other half
    
    ListNode* prev = NULL;
    
    while(h->next!=NULL)
    {
        ListNode* k = h->next;
        h->next = prev;
        prev = h;
        h = k;
        
    }
    
    h->next = prev;
    ///////
   
    while(h!=NULL&&q!=NULL)
    {
        ListNode* k = q->next;
        q->next = h;
        ListNode* l = h->next;
        h->next = k;
        q = k;
        prev = h;
        h = l;
        
    }
    
    if(h!=NULL)
    {
        prev->next = h;
    }
    
    return A;
    
}
