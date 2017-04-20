/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int kthsmallestUtil(TreeNode* root,int *k)
 {
      if(root==NULL)
       return -1;
    
       
    int l = kthsmallestUtil(root->left,k);
     if(l!=-1)
        return l;
     (*k)--;
     
    if(*k==0)
      {   //cout<<*k<<root->val;
          return root->val;
      }
    
    int r = kthsmallestUtil(root->right,k);
   
     if(r!=-1)
       return r;
   
 }
 
 
int Solution::kthsmallest(TreeNode* root, int k) {
    
  int res = kthsmallestUtil(root,&k);
 
   return res;     
}
