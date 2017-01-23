int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    long long int m = A.size();
    long long int n = A[0].size();
    long long int i=0,j=0;
    
    long long int x = A[i][n-1];
    
    while(i<m&&j<n)
    {
        
        if(x==B)
        {
            return 1;
        }
        
       else if(x>B)
        {
            j++;
            
            if(j<=n-1)
            {
                x = A[i][n-j-1];
            }
            
            
        }
        
        else if(x<B)
        {    i++;
           
           
           if(i<=m-1)
           {
               x = A[i][n-1];
           }
            
           
        }
        
        
        
    }
    
    return 0;
    
}
