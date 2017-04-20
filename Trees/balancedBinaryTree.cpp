/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 long long int height(TreeNode* A)
{
    if(A==NULL)
    {
        return 0;
    }
    
    long long int l = 1+ height(A->left);
    long long int r = 1 + height(A->right);
    
    return l>r?l:r;
    
}

 
int Solution::isBalanced(TreeNode* A) {
    
    if(A==NULL)
       return 1;
    
   long long int l = height(A->left);
   
   long long int r = height(A->right);
   
   if((l-r>=-1&&l-r<=1)&&isBalanced(A->left)&&isBalanced(A->right))
   {
       return 1;
   }
   
   else{
       return 0;
   }
    
    
}
