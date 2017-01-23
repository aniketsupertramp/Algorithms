int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int l,n,mid;
    l=0;
    n=A.size();
    mid = (l+n)/2;
    if(l==n-1)
    {
        if(A[l]==B)
          return l;
        else{
            return A[l]>B?l:l+1;
        }  
    }
    
    while(l<n)
    {
        if(A[mid]==B)
        {
            return mid;
        }
        
        else if(A[mid]>B)
        {   
            if(A[mid-1]<B)
            {
                return mid;
            }
            n = mid-1;
            mid = (l+n)/2;
            
            
        }
        
        else if(A[mid]<B)
        {
            if(A[mid+1]>B)
            {
                return mid+1;
            }
            l = mid+1;
            mid = (l+n)/2;
            
            
        }
        
        
    }
    
    
    
}
