/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
    q->val = A->val;
    q->next = NULL;
    ListNode* B = q;
    ListNode* prev = NULL;
    A = A->next;
    
    while(A!=NULL)
    { 
        
         
        B = q;
        
        while(B!=NULL&&A->val>B->val)
        {  prev = B;
           B = B->next;
        }
        
        ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = A->val;
        temp->next = NULL;
        if(q->val>=A->val)
        {
            temp->next = q;
            q = temp;
        }
        else{
            temp->next = B;
            prev->next = temp;
        }
        
        
        A = A->next;
        
    }
    
    return q;
}
