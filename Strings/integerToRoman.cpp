string Solution::intToRoman(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    unordered_map<int,string> val;
    
    val[1] = "I";
    val[2] = "II";
    val[3] = "III";
    val[4] = "IV";
    val[5] = "V";
    val[6] = "VI";
    val[7] = "VII";
    val[8] = "VIII";
    val[9] = "IX";
    val[10] = "X";
    val[40] = "XL";
    val[50] = "L";
    val[90] = "XC";
    val[100] = "C";
    val[400] = "CD";
    val[500] = "D";
    val[900] = "CM";
    val[1000] = "M";
    
    long long int a = 1000;
    long long int m;;
    string res;
    
    
    
    while(A/10>0)
    {
       m = A/a;
       if(m==1||m==4||m==5||m==9)
       {
           //res.push_back(val[m*a]);
           res.append(val[m*a]);
       }
       
       else{
         //  c=0;
           if(m>5)
           {
               //res.push_back(val[5*a]);
                res.append(val[5*a]);
               while(m>5)
           {
               //res.push_back(val[a]);
                res.append(val[a]);
               m--;
              // c++;
           }
           
           }
           
           else{
               while(m>=1)
           {
               m--;
              //res.push_back(val[a]);
               res.append(val[a]);
              
           }
           
           }
           
           
           
       }
       
       A = A%a;
       a=a/10;
       
    }
    
   res.append(val[A]);
    
    return res;
    
    
}
