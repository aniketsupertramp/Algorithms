vector<int> Solution::wave(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i;
    sort(A.begin(),A.end());
    
    for(i=0;i<A.size()-1;i++)
    {   if(i+1==A.size())
    {
        break;
    }
        long long int temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
        i++;
    }
    
   return A; 
}
