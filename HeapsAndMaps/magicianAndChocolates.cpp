void heapify(vector<int> &B,long long int l)
{
        long long int left = 2*l+1;
        long long int right = 2*l+2;
        
        long long int largest = l;

        if(left>=B.size()) // passed index is leaf node so return
            return;
        
        if(B[left]>B[l])
        {
            largest = left;
        }
        
        if(right<B.size()&&B[right]>B[largest])
        {
            largest = right;
        }

        if(largest!=l)
        {
            long long int temp = B[l];
            B[l] = B[largest];
            B[largest] = temp;
        
            heapify(B,largest);
        
        }
}

int Solution::nchoc(int A, vector<int> &B) {
    
   long long int res,i;
   res=0;
   
          for(i=B.size()/2;i>=0;i--)
            {
                heapify(B,i);
            }
            
            
            for(i=0;i<A;i++)
            {
                res+=B[0];
                res = res%(1000000000+7);
                B[0] = floor(B[0]/2);
               heapify(B,0);
            }
            
            return res;
    
}
