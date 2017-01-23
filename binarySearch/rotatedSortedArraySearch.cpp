int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     
     long long int l =0,pivot = -1;
     long long int n = A.size();
     long long int mid = (l+n)/2;
     
     
    while(l<=n)
    {
        if(A[mid]==B)
        {
            return mid;
        }
        
        else if(A[l]<=A[mid])
        {
            if(A[mid]>B&&A[l]<=B)
            {
                n = mid-1;
                mid = (l+n)/2;
            }
            
            else{
                 l = mid+1;
                mid = (l+n)/2;
               
            }
        }
        
        else if(A[mid]<A[n-1])
        {
            if(A[mid]<B&&A[n-1]>=B)
             {
                 l = mid+1;
                 mid = (l+n)/2;
             }
             
             else {
                 n = mid-1;
                 mid = (l+n)/2; 
             }
        }
    }
    
    return -1;
      
    
}
