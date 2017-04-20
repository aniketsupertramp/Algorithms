/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 TreeNode* newNode(int data)
 {
     TreeNode*  root = (TreeNode*)malloc(sizeof(TreeNode*));
     
     root->val = data;
     root->left = NULL;
     root->right = NULL;
     
     return root;
     
 }
 
TreeNode* sortedArrayToBSTUtil(const vector<int> &A,long long int start,long long int end)
{
    if(start>end)
       return NULL;
       
    long long int mid = ceil((start+end)/2);
    
    TreeNode* root = newNode(A[mid]);
    
    if(start==end)
         return root;
         
   
    
    root->right = sortedArrayToBSTUtil(A,mid+1,end);
    
     root->left =  sortedArrayToBSTUtil(A,start,mid-1); 
    
    return root;
         
}


/*void inOrder(TreeNode* root)
{
    if(root==NULL)
       return;
     
    inOrder(root->left);
    
    cout<<root->val<<" ";
    
    inOrder(root->right);
}*/
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {

   TreeNode* root = sortedArrayToBSTUtil(A,0,A.size()-1);
   
   //inOrder(root);
   
   return root;

}
