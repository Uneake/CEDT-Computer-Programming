#include <iostream>

void sw(int &m, int &n){
    int tmp=m;
    m=n;
    n=tmp;
}
int a,b,c,d,e;
main(){
    std::cin>>a>>b>>c>>d>>e;
    if(a>b)sw(a,b);
    if(c>d)sw(c,d);
    if(a>c){
        sw(b,d);
        c=a;
    }
    a=e;
    if(a>b)sw(a,b);
    if(c>a){
        sw(b,d);
        a=c;
    }
    if(a>d)std::cout<<d;
    else std::cout<<a;
}
