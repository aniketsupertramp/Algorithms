stack<long long int> A,B;

MinStack::MinStack() {
    
    
    
}

void MinStack::push(int x) {
    
    A.push(x);
    if(B.empty()||x<=B.top())
    {
        B.push(x);
    }
}

void MinStack::pop() {
   
   if(!B.empty()&&B.top()==A.top())
   {
       B.pop();
   }
   
   if(!A.empty())
   {
       A.pop();
   }
   
    
}

int MinStack::top() {
    if(!A.empty())
    {
        return A.top();
    }
    else{
        return -1;
    }
    
}

int MinStack::getMin() {
   if(A.empty())
   {
       return -1;
   }
   else{
       return B.top();
   }
}

