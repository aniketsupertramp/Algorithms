bool Solution::isPower(int A) {
    
    long long int i,j;
    
    if(A==1)
       return true;
       
    for(i=2;i<=A/2;i++)
    {   j = i;
        while(j<=A)
        {   if(j==A)
               {
                   return A;
               }
            j = i*j;
        }
    }
    
    
    return false;
}
