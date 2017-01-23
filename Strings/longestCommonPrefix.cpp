string Solution::longestCommonPrefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,k,j;
    
    k = A[0].length();
    
    for(i=0;i<A.size()-1;i++)
    {
        j=0;
        
        while(A[i][j]==A[i+1][j])
        {
            j++;
        }
        
        k = k>j?j:k;
        
        
    }
    
    string str;
    
    for(i=0;i<k;i++)
    {
        str.push_back(A[0][i]);
    }
    
    
    return str;
    
}
