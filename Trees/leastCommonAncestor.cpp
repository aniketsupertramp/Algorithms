/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 bool find(TreeNode* A,int val)
 {
     if(A==NULL)
       return false;
      
     if(A->val==val)
        return true;
    
     if(find(A->left,val)||find(A->right,val))
     {
         return true;
     }
     
     
     return false;
 }
 
 
int lcaUtil(TreeNode* A, int val1, int val2) {
    
    if(A==NULL)
       return -1;
   
     
            
           
  //  if(A->left==NULL&&A->)   
       
    if(A->val==val1||A->val==val2||A->val==val1||A->val==val2)
    {
        return A->val;
    }
    
    int l = lcaUtil(A->left,val1,val2);
    
    int r = lcaUtil(A->right,val1,val2);
    
    if(l!=-1&&r!=-1)
    {
        return A->val;
    }
    
    if(l!=-1)
    {
        return l;
    }
    
    if(r!=-1)
    {
        return r;
    }
    
    return -1;
}

int Solution::lca(TreeNode* A, int val1, int val2) {
 
   if(find(A,val1)&&find(A,val2))
    {//cout<<"hi";
        return lcaUtil(A,val1,val2);
    }
    
    return -1;
}


