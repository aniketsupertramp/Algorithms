void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,j=0,t;
    
    vector<int> C;
    
    for(i=0;i<A.size();i++)
    {
        //t = A[i];
        while(j<B.size()&&A[i]>B[j])
        {
            
           C.push_back(B[j]);
            
           j++;
        }
        
        
        
        if(j==B.size())
        {
            break;
        }
        
        C.push_back(A[i]);

    }
    
    if(i<A.size())
    {
        C.push_back(A[i]);
        i++;
    }
    
    A.clear();
    
    for(i=0;i<C.size();i++)
    {
        A.push_back(C[i]);
       
    }
    
    while(j<B.size())
    {
        A.push_back(B[j]);
        j++;
    }
}
