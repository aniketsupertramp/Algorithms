int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 long long int x,l,n;
   
   x = (0+A)/2;
   n = A;
   
   l = 0;

   if(A==0||A==1)
          return A;
   while(l<=n)
   {
       if(x==1||x<1)
       {
           return 1;
       }
       
       
       if(x*x>A&&(x-1)*(x-1)<A)
       {
           return x-1;
       }
       
     else if(x*x>A)
      {
        n = x;
       x = (l+n)/2;
       
       }  
       
       else if(x*x<A)
       {
        l = x;   
        x = (l+n)/2;
        
       }
       
       
       else{
           return x;
       }
   }
   
   
   
}
