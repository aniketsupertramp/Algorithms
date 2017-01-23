string Solution::countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,j,c;
    
    string prev = "1";
    
    for(i=1;i<A;i++)
    {
        j = 0;
        string str;
        
        while(j<prev.length())
        { c = 1;
            while(j<prev.length()-1&&prev[j]==prev[j+1])
            {
                c++;
                j++;
            }
            
            str.push_back(c+'0');
            str.push_back(prev[j]);
            j++;
        }
        
        prev = str;
        
    }
    
    return prev;
    
}
