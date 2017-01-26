int Solution::diffPossible(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int l,r,i,j;
    l = 0;
    r=A.size()-1;
    
    j=0;
    
    
   
   for(i=0;i<A.size()-1;i++)
   {
       j = A[i+1]>A[j]?i+1:j;
       
       while(j<A.size()&&A[j]-A[i]<=B)
       {
           if(A[j]-A[i]==B)
            {
                return 1;
            }
            j++;
       }
   } 
    
    return 0;
}
