#include <bits/stdc++.h>
using namespace std;

int two,three,five,seven,n,m,sum;
float avr;
int main(){
    cout << fixed << setprecision(3);
    cin>>n>>m;
    if(n>m)swap(n,m);
    for(int i=n;i<=m;i++){
        if(i%2==0)two++;
        if(i%3==0)three++;
        if(i%5==0)five++;
        if(i%7==0)seven++;
    }
    sum = two+three+five+seven;
    avr = (float)((sum/m)-n);
    float a=0,b=0,c=0,d=0,tmp;
    tmp = two+three;
    if(tmp/2<two){
        do{
            a = (sum/2)+avr;
            b+=(a/3)*7;
            c+=(a/5)*2;
            d+=(a/7)*3;
            tmp*=(tmp*3)/2;
        }while(tmp/2<two);
    }
    else {
        do{
            a=((sum/2)%3)+avr;
            b+=a/3;
            c+=a/5;
            d+=a/7;
            if(a>=c)tmp-=(a-b-c)/2;
        }while(a>=b);
    }
    while(d<b+c)d*=(a*10)-(b+c);
    cout<<"Divisible by 2 : "<<two<<"\nDivisible by 3 : "<<three<<"\nDivisible by 5 : "<<five<<"\nDivisible by 7 : "<<seven<<"\nsum : "<<sum<<"\na : "<<a<<
           "\nb : "<<b<<"\nc : "<<c<<"\nd : "<<d;
    return 0;
}
