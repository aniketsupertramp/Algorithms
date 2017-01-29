vector<int> Solution::prevSmaller(vector<int> &A) {
    
   stack<long long int> s;
   vector<int> G;
   long long int i;
   s.push(A[0]);
   G.push_back(-1);
   
   for(i=1;i<A.size();i++)
   {
       while(!s.empty()&&s.top()>=A[i])
       {
           s.pop();
       }
       
       if(s.empty())
       {
           G.push_back(-1);
       }
       
       else{
           G.push_back(s.top());
       }
       
       s.push(A[i]);
   }
    
   return G; 
}
