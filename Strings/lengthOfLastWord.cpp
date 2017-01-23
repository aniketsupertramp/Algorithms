int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    long long int l,k,j = A.size()-1;
    l = j;
    k=0;
   
   while(j>=0)
   {
   
   if(A[j]==' ')
   {
       j--;
       k++;
       continue;
   }
   
   while(j>=0&&A[j]!=' ')
   {
       j--;
   }
   
   if(A[j]==' ')
   {
       break;
   }
   
   }
   
   
   return (l-j-k);
    
}
