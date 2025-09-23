#include <iostream>
#define ll long long

std::string digit[]={"" ,"one ","two ","three ","four ",
                     "five ","six ","seven ","eight ","nine "};
std::string tens_digit[]={"ten ","eleven ","twelve ","thirteen ","fourteen ",
                          "fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
std::string tens[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ",
                    "eighty ","ninety "};
std::string big[]={"","thousand ","million ","billion ","trillion "};
std::string s,ans="";
main(){
    std::cin>>s;
    if(s=="0")std::cout<<"zero";
    else {
        ll l=s.length();
        for(int i=0;i<l;i++){
            ll t=l-i;
            ll k=(t-1)/3;
            std::string tmp=s.substr(i,t-(3*k+1)+1);
            ll n=std::stoi(tmp);
            ll m=n;
            if(n>=100)ans=ans+digit[n/100]+"hundred ";
            n%=100;
            if(n>=10&&n<20){
                ans=ans+tens_digit[n%10];
                n=0;
            }
            if(n>=20)ans=ans+tens[n/10];
            n%=10;
            ans=ans+digit[n];
            if(m!=0)ans=ans+big[k];
            i=l-(3*k+1);
        }
    }
    std::cout<<ans;
}
