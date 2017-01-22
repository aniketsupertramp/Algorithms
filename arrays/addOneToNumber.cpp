vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     
     A[A.size()-1] = A[A.size()-1] + 1;
     int i = A.size()-1;
     int v = A[A.size()-1];
    while(i>0&&v>9)
     {
         A[i] = 0;
         
         A[i-1] = A[i-1] + 1;
         v = A[i-1];
         i--;
     }
     
     if(v>9)
     {
         A[i] = A[i] + 1;
         if(i==0)
         {
             A[i] = 1;
             A.push_back(0);
         }
     }
     
     
     int j=A[0];
      i=0;
     while(j==0)
     {
         A.erase(A.begin()+0);
         j = A[i];
     }
     
     return A;
}
