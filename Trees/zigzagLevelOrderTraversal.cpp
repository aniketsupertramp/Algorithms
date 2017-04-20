/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
   
   stack<TreeNode*> s1,s2;
   vector<vector<int>> res;
   
   
   s1.push(A);
   
   while(!s1.empty()||!s2.empty())
   {
       vector<int> vec;
       TreeNode* p;
       
       while(!s1.empty())
       {   
           p = s1.top();
           vec.push_back(p->val);
           s1.pop();
            
            if(p->left)
              s2.push(p->left);
              
            if(p->right) 
              s2.push(p->right);  
              
       }
       
       if(vec.size()>0)
          {
              res.push_back(vec);
              vec.clear();
          }      
          
       
       while(!s2.empty())
       {
           p = s2.top();
           vec.push_back(p->val);
           s2.pop();
          
           if(p->right)
             s1.push(p->right);
            
           if(p->left)
             s1.push(p->left);     
       }
       
       if(vec.size()>0)
          {
              res.push_back(vec);
              vec.clear();
          }      
          
       
   }
   
   return res;
}
