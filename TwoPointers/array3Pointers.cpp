int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    long long int i,j,k,a,b,c,tempDiff,maxDiff;
    i=j=k=0;
    
    maxDiff = 10000000;
    
    while(i<A.size()&&j<B.size()&&k<C.size())
    {
        tempDiff = (abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k]))>abs(C[k]-A[i])?(abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k])):abs(C[k]-A[i]);
        
        
        if(maxDiff>tempDiff)
        {
         maxDiff = tempDiff;
         a = i;
         b=j;
         c=k;
        }
        
        if(A[i]<=B[j]&&A[i]<=C[k])
        {
            i++;
        }
        
        else if(B[j]<=A[i]&&B[j]<=C[k])
        {
            j++;
        }
        
        else{
            k++;
        }
        
    }
    
    if(j<B.size()&&k<C.size())
    {i--;
        while(j<B.size()&&k<C.size())
        {
           tempDiff = (abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k]))>abs(C[k]-A[i])?(abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k])):abs(C[k]-A[i]);
           
           if(maxDiff>tempDiff)
           {
                maxDiff = tempDiff;
             a = i;
              b=j;
              c=k;
           }
           
           if(B[j]<=A[i]&&B[j]<=C[k])
        {
            j++;
        }
        
        else{
            k++;
        }
           
           
        }
    }
    
    if(j<B.size()&&i<A.size())
    {k--;
        while(j<B.size()&&i<A.size())
        {
           tempDiff = (abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k]))>abs(C[k]-A[i])?(abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k])):abs(C[k]-A[i]);
           
           if(maxDiff>tempDiff)
           {
                maxDiff = tempDiff;
             a = i;
              b=j;
              c=k;
           }
           
            if(B[j]<=A[i]&&B[j]<=C[k])
        {
            j++;
        }
        
        else{
            i++;
        }
           
           
        }
    }
    
    
    if(i<A.size()&&k<C.size())
    {j--;
        while(i<A.size()&&k<C.size())
        {
           tempDiff = (abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k]))>abs(C[k]-A[i])?(abs(A[i]-B[j])>abs(B[j]-C[k])?abs(A[i]-B[j]):abs(B[j]-C[k])):abs(C[k]-A[i]);
           
           if(maxDiff>tempDiff)
           {
                maxDiff = tempDiff;
             a = i;
              b=j;
              c=k;
           }
           
           else if(A[i]<=B[j]&&A[i]<=C[k])
        {
            i++;
        }
        
        else{
            k++;
        }
           
           
        }
    }
    
    
    return maxDiff;
    
    
}
