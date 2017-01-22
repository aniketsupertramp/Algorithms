bool isPrime(long long int a)
{
    long long int j;
    
    if(a==1)
       return false;
       
    
    for(j=2;j<=sqrt(a);j++)
    {
        if(a%j==0)
        {
            return false;
        }
    }
    
    return true;
}


vector<int> Solution::primesum(int A) {
    long long int i;
    vector<int> res;
    
    
    for(i=2;i<A;i++)
    {
        if(isPrime(i)&&isPrime(A-i))
        {
            res.push_back(i);
            res.push_back(A-i);
            return res;
        }
    }
    
}


