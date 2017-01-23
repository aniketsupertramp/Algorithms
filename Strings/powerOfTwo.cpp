int Solution::power(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int num,i,d,n;
    
    i = A.length()-1;
    n = 0;
    d = 1;
    if(A=="1")
    {
        return 0;
    }
    
    while(i>=0)
    {
        num = A[i] - '0';
        n = n + num*d;
        d = d*10;
        i--;
    }
    
    if(n&(n-1))
    {
        return 0;
    }
    
    else{
        return 1;
    }
}
