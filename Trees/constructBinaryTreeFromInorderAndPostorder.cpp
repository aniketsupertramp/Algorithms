/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* newNode(long long int val)
   {
       TreeNode* n = (TreeNode*)malloc(sizeof(TreeNode));
       n->val = val;
       n->left = NULL;
       n->right = NULL;
       
       return n;
   }
 
    long long int findIndex(vector<int>& inorder,long long int start,long long int end,long long int key)
    {
        long long int i;
        
       for(i=start;i<=end;i++)
       {
           if(inorder[i]==key)
              return i;
       }
       
       return -1;
    }
  
    TreeNode* buildTreeUtil(vector<int>& inorder, vector<int>& postorder,long long int start,long long int end,long long int* postIndex) {    
      
        if(start>end)
            return NULL;
            
        
        TreeNode* root = newNode(postorder[*postIndex]);
        
        (*postIndex)--;
        
        if(start==end)
             return root;
        
        long long int rootIndex = findIndex(inorder,start,end,root->val);
        
        root->right = buildTreeUtil(inorder,postorder,rootIndex+1,end,postIndex);
        
        root->left = buildTreeUtil(inorder,postorder,start,rootIndex-1,postIndex);
    
        return root;              
 
    }

TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {

long long int x = (postorder.size()-1);
        
       return buildTreeUtil(inorder,postorder,0,inorder.size()-1,&x);
    
    
}
