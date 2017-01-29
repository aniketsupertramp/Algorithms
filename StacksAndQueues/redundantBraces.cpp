int Solution::braces(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
long long int i,j;
stack<long long int> s;
    for(i=0;i<A.length();i++)
    {
         if(A[i]==')')
         {j=0;
             while(!s.empty()&&s.top()!='(')
             {  
                 j++;
                 s.pop();
             }
             
             if(j==0)
             {
                 return 1;
             }
             else{
                 s.pop();
             }
             
         }
         
         else if(A[i]=='+'||A[i]=='*'||A[i]=='/'||A[i]=='-'||A[i]=='('){
             s.push(A[i]);
         }
    }
    
    
    
    return 0;
}
