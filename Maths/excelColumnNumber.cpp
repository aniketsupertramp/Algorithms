int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int i,n,res;
    res = 0;
    n = 1;
    
    for(i=A.length()-1;i>=0;i--)
    {
        res = res + (A[i]-64)*n;
        n = n*26;
    }
    
    
    return res;
}
