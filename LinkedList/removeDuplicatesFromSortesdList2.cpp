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
    long long int p;
    int flag=0;
    ListNode* prev = head;
    while(A!=NULL)
    {  flag=0;
        p = A->val;
       while(A->next!=NULL&&p==A->next->val)
       {
         flag=1;
         A->next = A->next->next;
       }
       
       if(flag==1)
       {
           if(A!=head)
           {
               prev->next = A->next;
               A = A->next;
           }
           else{
               head = A->next;
                A = A->next;
           }
       }
       
       else{
           prev = A;
           A = A->next;
       }
       
    }
    
    return head;
    
}
