string Solution::convertToTitle(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,rem,l;
    string str;
    
    while(A)
    {
        rem = A%26;
        A = A/26;
        
       if(rem==0)
       {
           str.push_back('Z');
           A--;//important line;
           
       }
       
       else{
           str.push_back(64+rem);
       }
       
        
       
    }
   
    
    i = 0;
    l = str.length()-1;
    
    while(i<l)
    {
        char temp = str[l];
        str[l] = str[i];
        str[i] = temp;
        i++;
        l--;
    }
    
    return str;
}
