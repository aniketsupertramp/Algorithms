int Solution::evalRPN(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long int i,res=0;
    stack<long long int> s;
    
    for(i=0;i<A.size();i++)
    {
        
        
        if(A[i]=="/") {
            long long int a = s.top();
            s.pop();
            long long int b = s.top();
            s.pop();
            res =  b/a;
            s.push(res);
        }
        else if(A[i]=="*") {
            long long int a = s.top();
            s.pop();
            long long int b = s.top();
            s.pop();
            res = a*b;
            s.push(res);
        }
        else if(A[i]=="+") {
            long long int a = s.top();
            s.pop();
            long long int b = s.top();
            s.pop();
            res =  a+b;
            s.push(res);
        }
        else if(A[i]=="-") {
            long long int a = s.top();
            s.pop();
            long long int b = s.top();
            s.pop();
            res =  b-a;
            s.push(res);
        }
        
        else{
            long long int j=0,f=0;
            long long int p=0;
            if(A[i][j]=='-')
            {
                f=-1;
                j++;
            }
            while(j<A[i].length())
            {//cout<<"hi";
                p = p*10 + (A[i][j]-'0');
                j++;
            }
            if(f==-1)
            {
                p=p*-1;
            }
            s.push(p);
        }
    }
    
    return s.top();
    
}
