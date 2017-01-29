/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));

    
    
   
   ListNode* head = p;
   long long int sum,carry;
    int f=0;
    carry = 0;
    
    while(A!=NULL&&B!=NULL)
    {   
        
        sum = A->val + B->val + carry;
        carry = sum/10;
        sum = sum%10;
        p->val = sum;
        A = A->next;
        B = B->next;
        if(A!=NULL||B!=NULL)
        {
         p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p = p->next;
        }
       
        else{
            p->next = NULL;
        }
        
    }
    
    while(A!=NULL)
    {//cout<<"hi"<<endl;
       
       sum = A->val + carry;
        carry = sum/10;
        sum = sum%10;
        p->val = sum;
        A = A->next;
       if(A!=NULL)
        {
         p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p = p->next;
        }
        
        else{
            p->next = NULL;
        }
    }
    
    while(B!=NULL)
    {
       
         sum = B->val + carry;
        carry = sum/10;
        sum = sum%10;
        p->val = sum;
        B = B->next;
       
        
        
        if(B!=NULL)
        {
         p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p = p->next;
        }
        
        else{
            p->next = NULL;
        }
    }
    
    if(carry!=0)
    {
        p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->next->val = carry;
        p->next->next = NULL;
    }
    
    return head;
    
    
}
