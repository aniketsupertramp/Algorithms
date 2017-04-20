/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* root) {
    
    if(root==NULL)
      return NULL;
    
    if(root->left==NULL&&root->right==NULL)
       return root;
      
    TreeNode* p = root->left;
    root->left = root->right;
    root->right = p;
    
     invertTree(root->left);
     invertTree(root->right);
    
   return root; 
}
