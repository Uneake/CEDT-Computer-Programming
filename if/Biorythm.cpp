#include <iostream>
#include <cmath>

double day_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int d_1,m_1,y_1,d_2,m_2,y_2;
double ans;
bool ch1,ch2;
main(){
    std::cin>>d_1>>m_1>>y_1>>d_2>>m_2>>y_2;
    y_1-=543;y_2-=543;

    //calculate black part
    ans+=365*(y_2-y_1-1);

    //check leap year
    if(y_1%400==0||(y_1%4==0&&y_1%100!=0))ch1=true;
    if(y_2%400==0||(y_2%4==0&&y_2%100!=0))ch2=true;
    
    //calculate red part
    for(int i=0;i<m_1-1;i++){
        if(i==1){
            if(ch1)ans-=1;
        }
        ans-=day_in_month[i];
    }
    ans-=d_1-1; // this means ans = ans - d_1 + 1
    if(ch1)ans+=366;
    else ans+=365;
    //red part = 366 or 365 - DayOfYear of date + 1(1 is birthday)

    //calculate blue part
    for(int i=0;i<m_2-1;i++){
        if(i==1){
            if(ch2)ans+=1;
        }
        ans+=day_in_month[i];
    }
    ans+=d_2-1;
    //blue part = DayOfYear of date - 1
    
    std::cout<<ans<<' '<<round(sin(2*M_PI*ans/23.0)*100.0)/100.0<<' '<<round(sin(2*M_PI*ans/28.0)*100.0)/100.0<<' '<<round(sin(2*M_PI*ans/33.0)*100.0)/100.0;

}

