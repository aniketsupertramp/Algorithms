/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
   
   if(A==NULL)
      return 0;
   
   if(A->left==NULL&&A->right==NULL)
     return 1;
    
    
    long long int l;
    long long int r;
    
    if(!A->left)
    {
        return 1+minDepth(A->right);
    }
    
    if(!A->right)
     {
          return 1+minDepth(A->left);
     }
    
    return minDepth(A->left)>minDepth(A->right)?minDepth(A->right)+1:minDepth(A->left)+1;
   
}
