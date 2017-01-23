int Solution::compareVersion(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,j,k,l,n1,n2;
    int flag1,flag2;
    flag1=flag2=0;
    i = j = 0;
    
    while(i<A.length()&&j<B.length())
    {
        k=0;
        while(i<A.length()&&A[i]!='.')
        {
            k++;
            if(A[i]=='0'&&flag1==0)
            {
                k--;
            }
            else{
                flag1=1;
            }
            i++;
            
        }
        l=0;
        while(j<B.length()&&B[j]!='.')
        {
            if(B[j]=='0'&&flag2==0)
            {
                l--;
            }
            
            else{
                flag2=1;
            }
            
            j++;
            l++;
        }
        
        if(k>l)
        {
            return 1;
        }
        
        else if(l>k){
            return -1;
        }
        
        else{
           n1=0;
           while(k>0)
           {
               n1 = n1*10 + (A[i-k]-'0');
               k--;
           }
           n2 = 0;
           while(l>0)
           {
               n2 = n2*10 + (B[j-l]-'0');
               l--;
           }
           
           if(n2>n1)
           {
               return -1;
           }
           
           else if(n1>n2)
           {
               return 1;
           }
           
           else{
               
               
           }
        }
        
        i++;
        j++;
    }
    
    if(i<A.length())
    {  
        while(i<A.length())
        {
            if(A[i]!='0'&&A[i]!='.')
            {
               return 1; 
            }
            i++;
        }
        
        return 0;
    }
    else if(j<B.length())
    {
        while(j<B.length())
        {
            if(B[j]!='0'&&B[j]!='.')
            {
                return -1;
            }
            j++;
        }
        return 0;
    }
    
    else{
        return 0;
    }
    
    
    
}
