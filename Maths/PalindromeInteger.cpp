bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
      long long int n,l,r;

     n= 1;
      if(A<0)
     {
         return false;
     }
     if(A/10==0)
     {
         return true;
     }
    
    while(A/n!=0)
    {
        n = n*10;
    }
n = n/10;
//cout<<n<<endl;
long long int p = n/10;
     while(n>1)
     {
         l = A%10;
         r = A/n;
         //cout<<r<<endl;
         n = n/100;
         A = A/10;

         A = A%p;
          p = p/100;
        // cout<<A<<endl;

         if(l!=r)
         {//cout<<l<<" "<<r;
             return false;
         }


     }

     return true;

    
}
