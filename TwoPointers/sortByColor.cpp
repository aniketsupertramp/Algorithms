void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int l,m,r,temp,i;
    
    l = 0;
    m = 0;
    r = A.size()-1;
    
   for(i=0;i<A.size();i++)
   {
       if(A[m]==0)
       {
           temp = A[m];
           A[m] = A[l];
           A[l] = temp;
           m++;
           l++;
       }
       
       else if(A[m]==1)
       {
           m++;
       }
       
       else{
           temp = A[m];
           A[m] = A[r];
           A[r] = temp;
           r--;
           
       }
       
   }
   
  
    
}
