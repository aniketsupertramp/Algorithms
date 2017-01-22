vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int xor1 = 0,xor2 = 0;
    
    for(int i=0;i<A.size();i++)
       {
           xor1 = xor1 ^ A[i];
       }  
       
       for(int i=1;i<A.size()+1;i++)
        {
            xor2 = xor2 ^ i;
        }
        
        int res_xor = xor1^xor2;
        
        int set_bit = res_xor & (~(res_xor-1));
        xor1=xor2=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]&set_bit)
            {
                xor1 = xor1 ^ A[i];
            }
            
            else{
                xor2 = xor2 ^ A[i];
            }
            
        }
     
     for(int i=1;i<A.size()+1;i++)
     {
         if(i&set_bit)
            {
                xor1 = xor1 ^ i;
            }
            
            else{
                xor2 = xor2 ^ i;
            }
            
     }
     
     int p,q;
     
     for(int i=0;i<A.size();i++)
     {
         if(A[i]==xor1)
          {
              p = xor1;
              q = xor2;
          }
          
         if(A[i]==xor2)
         {
             p = xor2;
             q = xor1;
         }
     }
     
    vector<int> res;
    res.push_back(p);
    res.push_back(q);
    
     return res;
     
}
