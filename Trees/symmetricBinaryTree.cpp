/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int isSubSymmetric(TreeNode* A, TreeNode* B)
 {
    if(A==NULL&&B==NULL)
    {
        return 1;
    }
    
    if(A==NULL&&B!=NULL)
    {
        return 0;
    }
    
    if(A!=NULL&&B==NULL)
    {
        return 0;
    }
    
    if(A->val==B->val&&
    isSubSymmetric(A->left,B->right)&&isSubSymmetric(A->right,B->left))
    {
        return 1;
    }
    else{
        return 0;
    }
    
 }
 
int Solution::isSymmetric(TreeNode* A) {
    
    if(A==NULL)
    {
        return 1;
    }
    
     if(A->left==NULL&&A->right==NULL)
    {
        return 1;
    }
    
    if(A->left!=NULL&&A->right==NULL)
    {
        return 0;
    }
    
    if(A->left==NULL&&A->right!=NULL)
    {
        return 0;
    }
    
    if(isSubSymmetric(A->left,A->right))    {
        return 1;
    }
    
    else{
       return 0;
    }
    
}
