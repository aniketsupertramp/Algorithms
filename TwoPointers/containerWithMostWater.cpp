int Solution::maxArea(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int l,r,area,base,minH;
    
     l =0;
     r =A.size()-1;
     area = 0;
     base = A.size()-1;
     minH = A[l]>A[r]?A[r]:A[l];
     
     while(l<r)
     {
         if(area<(base*minH))
         {
             area = base*minH;
         }
         
         if(A[l]>A[r])
         {
             r--;
             minH = A[l]>A[r]?A[r]:A[l];
             base--;
         }
         
         else{
             l++;
             minH = A[l]>A[r]?A[r]:A[l];
             base--;
         }
         
         
     }
    
    return area;
}
