int Solution::isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  
    long long int i;
    
    string B;
    
   for(i=0;i<A.length();i++)
   {
       if((A[i]>='A'&&A[i]<='Z')||(A[i]>='a'&&A[i]<='z')||(A[i]>='0'&&A[i]<='9'))
       {
           B.push_back(tolower(A[i]));
       }
   }

long long int l = B.length()-1;
i=0;

  while(i<l)
  {
      if(B[i]!=B[l])
      {
          return 0;
      }
      
      else{
          i++;
          l--;
      }
  }
 return 1;
   
}

