int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int n;
    
    int flag =0;
    if(A<0)
    {   flag =1;
        A = A*(-1);
    }
    if(A==0)
    {
        return 0;
    }
    n = 0;
    
    while(A)
    {
        n = n*10 + A%10;
        A = A/10;
    }
    if(n>INT_MAX||n<INT_MIN)
    {
        return 0;
    }
    
    if(flag==1)
    {
        n = n*(-1);
    }
    
    return n;
}
