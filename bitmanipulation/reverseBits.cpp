unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned long long int s,c,p,num,n,i;
    n = A;
    s=1;
    c=0;
    num = 0;
    
    
    
    while(s<=n)
    {
        if(s&n)
        {i=0;
         p  = pow(2,32-c);
           
            num = num | p;
            
        }
        
        else{
            //do nothing
        }
        
        s = s<<1;
        c++;
    }
    
    return num/2;
    
}
