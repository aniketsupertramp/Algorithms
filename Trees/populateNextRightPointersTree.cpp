/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    
    if(A==NULL)
      return;
      
    queue<TreeLinkNode*> q;
    q.push(A);
    q.push(NULL);
    
    while(!q.empty())
    {
        TreeLinkNode* temp = q.front();
         
         if(q.front()==NULL)
         {
             q.pop();
             break;
         }
         
         q.pop();
         
         if(!q.empty())
         {
             temp->next = q.front();
             
         }
         
         else{
             temp->next = NULL;
         }
         
         if(temp->left)
            q.push(temp->left);
        
         if(temp->right)
             q.push(temp->right);
         
         if(q.front()==NULL)
             {
                 q.pop();
                 q.push(NULL);
             } 
        
        
    }
    
    
    
}
