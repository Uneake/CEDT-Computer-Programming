//You can find the formula by searching "converting repeating decimals to fractions"
#include <iostream>
#include <cmath>
#include <numeric>
#include <string>

long long top,bottom=1,digit_c,digit_b;
std::string a,b,c;

main(){
    std::cin>>a>>b>>c;
    digit_c = c.length();
    digit_b = b.length();
    long long tmp = stoi(a)*pow(10,digit_b)+stoi(b);
    top = tmp*pow(10,digit_c)+stoi(c)-tmp; //find numerator (all - repeated)
    tmp=0;
    for(int i=0;i<digit_c;i++){
        tmp = tmp*10+9;
    }
    for(int i=0;i<digit_b;i++)tmp*=10;
    bottom=tmp; //find denominator (9 for repeated-digit and 0 for not-repeated-digit; calculate only decimal part)
    long long gcd_ = std::gcd(top,bottom);
    std::cout<<top/gcd_<<" / "<<bottom/gcd_;
}

