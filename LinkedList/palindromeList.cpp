/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 int myPalin(ListNode** head,ListNode* A)
 {
     if(A==NULL)
         return 1;
         
    
     if(!myPalin(head,A->next))
            return 0;
         
     if((*head)->val==A->val) 
             {
                 (*head) = (*head)->next;
                 return 1;
             }
             
    else{
          (*head) = (*head)->next;
            return 0;
        }

     
     
    
 }
 
int Solution::lPalin(ListNode* A) {
    
int f  = myPalin(&A,A);
    
}
