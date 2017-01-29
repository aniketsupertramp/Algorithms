int Solution::trap(const vector<int> &A) {
   
     long long int max,area=0,i,currmax;
     max = currmax = A[0];
     stack<long long int> s;
     s.push(max);
     
    for(i=1;i<A.size();i++)
    {
        if(A[i]<max)
        {
            s.push(A[i]);
        }
        else{
            while(!s.empty()&&s.top()<=max)
            {
                area = area + (max - s.top());
                s.pop();
            }
            max = A[i];
            s.push(max);
        }
    }
    if(!s.empty())
    {
        currmax = s.top();
        s.pop();
    }
    while(!s.empty())
    {
        if(currmax>s.top())
        {
            area = area + (currmax - s.top());
            s.pop();
        }
        else{
            currmax = s.top();
            s.pop();
        }
    }
    
    return area;
}
