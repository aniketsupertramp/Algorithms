int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,res;
    res = 0;
    
    unordered_map<char,int> val;
    
    val['I'] = 1;
    val['V'] = 5;
    val['X'] = 10;
    val['L'] = 50;
    val['C'] = 100;
    val['D'] = 500;
    val['M'] = 1000;
    
    if(A.length()==1)
    {
        return val[A[0]];
    }
    
    for(i=0;i<A.length()-1;i++)
    {
        if(val[A[i]]>=val[A[i+1]])
        {
            res = res + val[A[i]];
        }
        
        else{
            res = res  - val[A[i]];
        }
    }
    
    res = res + val[A[i]];
    
    return res;
    
}
