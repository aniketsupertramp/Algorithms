string Solution::addBinary(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,j,l;
    char carry = '0';
    string res;
    
    i = A.length()-1;
    j = B.length()-1;
    
    while(i>=0&&j>=0)
    {
        if(A[i]=='1'&&B[j]=='1')
        {
            if(carry=='1')
            {
                 res.push_back('1');
                 carry = '1';
            }
            
            else{
                 res.push_back('0');
                 carry = '1';
            }
           
            
        }
        
        else if(A[i]=='0'&&B[j]=='0')
        {
            res.push_back(carry);
            carry = '0';
        }
        
        else{
            if(carry=='1')
            {
                 res.push_back('0');
                 carry='1';
            }
            else{
                res.push_back('1');
                carry = '0';
            }
            
           // carry = '0';
        }
        
        i--;
        j--;
    }
    
   // cout<<res<<endl;
    while(i>=0)
    {
         if(A[i]=='1'&&carry=='1')
        {
            res.push_back('0');
            carry = '1';
        }
        
       else if(A[i]=='0'&&carry=='0')
        {
            res.push_back('0');
        }
        
        else{
            if(carry=='1'&&A[i]=='0')
            {
                 res.push_back('1');
                 carry='0';
            }
            else{
                res.push_back('1');
                carry = '0';
            }
           
        }
        
        i--;
    }
   // cout<<res<<endl;
    while(j>=0)
    {
         if(carry=='1'&&B[j]=='1')
        {
            res.push_back('0');
            carry = '1';
        }
        
       else if(carry=='0'&&B[j]=='0')
        {
            res.push_back('0');
        }
        
        else{
           if(carry=='1'&&B[j]=='0')
            {
                 res.push_back('1');
                 carry='0';
            }
            else{
                res.push_back('1');
                carry = '0';
            }
            
        }
        
        j--;
        
    }
    
    
    if(carry=='1')
    {
        res.push_back('1');
    }
    
    i = 0;
    l = res.length()-1;
    
    while(i<l)
    {
        char temp = res[i];
        res[i] = res[l];
        res[l] = temp;
        i++;
        l--;
    }
    
    return res;
    
}
