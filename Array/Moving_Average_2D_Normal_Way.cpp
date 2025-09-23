#include <iostream>
#include <cmath>
//We're gonna use quick sum. You can search if you want.

double arr[35][35],avg;
int r,c;
int main(){
    std::cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            std::cin>>arr[i][j];
        }
    }
    for(int i=2;i<=r-1;i++){
        for(int j=2;j<=c-1;j++){
            avg=0;
            avg = arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+
                  arr[i][j-1]+arr[i][j]+arr[i][j+1]+
                  arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
            avg = avg/9.0;
            std::cout<<round(avg*100.0)/100.0<<' ';
        }
        std::cout<<'\n';
    }
    return 0;
}
