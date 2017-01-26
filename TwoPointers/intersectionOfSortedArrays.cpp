vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,j=0;
    
    vector<int> res;
    
    for(i=0;i<A.size();i++)
    {
        while(j<B.size()&&A[i]>B[j])
        {
            j++;
        }
        
        if(j==B.size())
        {
          break;  
        }
        
        if(A[i]==B[j])
        {
            res.push_back(A[i]);
            j++;
        }
        
    }
    
    
    return res;
    
}
