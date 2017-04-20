vector<int> Solution::dNums(vector<int> &A, int B) {
    
    map<long long int,long long int> M;
    vector<int> res;
    
    long long int i,c;
    c=0;
    
    if(B>A.size())
      return res;
     
    for(i=0;i<B;i++)
    {
        if(M.find(A[i]) != M.end())
            {
                M[A[i]]++;
            }
        else{
            M[A[i]] = 1;
            c++;
        }        
    }
    
    res.push_back(c);
    
    for(i=B;i<A.size();i++)
    {
        //M.erase(A[i-B]);
        if(M[A[i-B]]==1)
           {
               M.erase(A[i-B]);
               c--;
           }   
        else
        {
            M[A[i-B]]--;
        }
     
        
        if(M.find(A[i]) != M.end())
            {
                 M[A[i]]++;
            }
        else{
            M[A[i]] = 1;
            c++;
           
        }      
      res.push_back(c);   
    }
    
    return res;
    
    
    
    
}
