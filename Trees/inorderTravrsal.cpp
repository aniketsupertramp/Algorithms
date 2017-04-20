/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
 
    TreeNode* temp = A;
    vector<int> res;
    if(A==NULL)
      return res;
    stack<TreeNode*> s;
    
    s.push(A);
    
    
        
    
    while(!s.empty())
    {
        TreeNode* p = s.top();
        
        while(p->left)
        {
            s.push(p->left);
            p = p->left;
        }
        
        p = s.top();
       
        res.push_back(p->val);
        
        while(!s.empty()&&!p->right)
        {   
            s.pop();
            if(!s.empty())
            {
                p = s.top();
            res.push_back(p->val);
            }
            
            
        }
       
        
        if(!s.empty())
        {
            //res.push_back(p->val);
             s.pop();   
            s.push(p->right);
            p = p->right;
        }
        

        
    }
    
    
    return res;
    
}
