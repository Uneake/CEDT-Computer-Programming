#include <iostream>

int day_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int d,m,y,sum;
main(){
    std::cin>>d>>m>>y;

    //check leap year
    if((y-543)%400==0||((y-543)%4==0&&(y-543)%100!=0)){
        day_in_month[1]++;
    }
    
    for(int i=0;i<m-1;i++)sum+=day_in_month[i];
    sum+=d;
    std::cout<<sum;

}
