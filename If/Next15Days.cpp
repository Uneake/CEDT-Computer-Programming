#include <iostream>

int day_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int d,m,y;
main(){
    std::cin>>d>>m>>y;

    //check leap year
    if((y-543)%400==0||((y-543)%4==0&&(y-543)%100!=0)){
        day_in_month[1]++;
    }
    
    d+=15;
    if(d>day_in_month[m-1]){
        d = d%day_in_month[m-1];
        m++;
        if(m>12){
            m=1;
            y++;
        }
    }
    std::cout<<d<<'/'<<m<<'/'<<y;

}
