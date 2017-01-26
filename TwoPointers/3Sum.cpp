int Solution::threeSumClosest(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,first,l,r,min,sum;
    
    min = sum = INT_MAX;
    
    sort(A.begin(),A.end());
    
    for(i=0;i<A.size();i++)
    {
        first = A[i];
        l = i+1;
        r = A.size()-1;
        while(l<r)
        {
            if(abs(first+A[l]+A[r]-B)<min)
            {
                min = abs(first+A[l]+A[r]-B);
                sum = first+A[l]+A[r];
            }
            
            else if(A[l]+A[r]+first>B)
            {
                r--;
            }
            
            else{
                l++;
            }
            
        }
    }
    
    return sum;
    
}
