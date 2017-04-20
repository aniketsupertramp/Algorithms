/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    
    stack<TreeNode*> s;
    vector<int> res;
    
    s.push(A);
    
    while(!s.empty())
    {
        TreeNode* p = s.top();
        res.push_back(p->val);
        
        while(p->left)
        {
            s.push(p->left);
            p = s.top();
            res.push_back(p->val);
            
        }
        
        
        p = s.top();
        //TreeNode* temp = NULL;
        
        while(!s.empty()&&(!p->right))
        {
            
            s.pop();
            if(!s.empty())
            {
                p = s.top();
            }
            
            
        }
        
        
        
        if(!s.empty())
        {
            s.pop();
            
          // res.push_back(p->val);    
           s.push(p->right);
        }
        
    }
    
    return res;
    
}
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    
    stack<TreeNode*> s;
    vector<int> res;
    
    s.push(A);
    
    while(!s.empty())
    {
        TreeNode* p = s.top();
        res.push_back(p->val);
        
        while(p->left)
        {
            s.push(p->left);
            p = s.top();
            res.push_back(p->val);
            
        }
        
        
        p = s.top();
        //TreeNode* temp = NULL;
        
        while(!s.empty()&&(!p->right))
        {
            
            s.pop();
            if(!s.empty())
            {
                p = s.top();
            }
            
            
        }
        
        
        
        if(!s.empty())
        {
            s.pop();
            
          // res.push_back(p->val);    
           s.push(p->right);
        }
        
    }
    
    return res;
    
}
