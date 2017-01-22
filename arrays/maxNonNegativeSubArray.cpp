vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
   long long int i=0;
    vector<int> res;
    long long int maxsum=0,sum=0,j=0;
    long long int k = 0,len=0;
    
    for(i=0;i<A.size();i++)
    {
        if(A[i]<0)
        {
            continue;
        }
        
        else{
            sum = 0;
          j = i;    
        while(A[i]>=0&& i<A.size())
        {
            sum = sum + A[i];
            i++;
        }
        if(sum>maxsum)
        {
            maxsum = sum;
            k = j;
            len = i-j;
        }
        
        else if(sum==maxsum)
        {
            if(i-j>len)
              {
                  maxsum = sum;
                  len = i-j;
              }
              
              
        }
        
        //cout<<i;
        }
        
    }
    
    for(i= k;i<len+k;i++)
    {
        //cout<<A[i]<<endl;
        res.push_back(A[i]);
    }
    
    return res;
    
}
