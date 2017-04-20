/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

 
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
       return 0;
     
     long long int l = 1+maxDepth(A->left);
     long long int r = 1+maxDepth(A->right);
     
     return l>r?l:r;
       
    
       
}
