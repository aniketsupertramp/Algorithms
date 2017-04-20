/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
   

    vector<int> res;
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
        
        
        while(!s.empty()&&!p->right)
        {
            s.pop();
            res.push_back(p->val);
            TreeNode* temp = p;
            if(!s.empty())
                p = s.top();
            
            while(!s.empty()&&temp==p->right)
            {
              temp = p;
               res.push_back(p->val);
              s.pop();
             if(!s.empty())
                 p = s.top();
              
            }
            
        }
        
        if(!s.empty())
            {
                s.push(p->right);
            }
        
            
    }
    
    
    return res;
    
}

