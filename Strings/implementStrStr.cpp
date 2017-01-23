int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,j;
    long long int t[needle.length()];
    
    j=0;
    t[0] = 0;
    
    if(haystack.length()==0||needle.length()==0)
    {
        return -1;
    }
    
    
    for(i=1;i<needle.length();i++)
    {//cout<<"hello";
        if(needle[j]==needle[i])
        {
            t[i] = j+1;
            j++;
        }
       
       else{
           
       
        if(j==0&&needle[j]!=needle[i])
        {
            t[i] = 0;
            
        }
        
        else{
            j = t[j-1];
            i = i-1;
        }
        
       }
        
    }
   // return -1;
   
    j = 0;
    i = 0;
    
    
    while(j<needle.length()&&i<haystack.length())
    {
        if(haystack[i]==needle[j])
        {
            i++;
            j++;
        }
        
        else if(haystack[i]!=needle[j]&&j==0)
        {
            i++;
        }
        
        else{
            j = t[j-1];
        }
    }
    
    
    if(j==needle.length())
    {
        return (i-1-needle.length()+1);
    }
    
    else{
        return -1;
    }
}
