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
            arr[i][j]=arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }
    for(int i=2;i<=r-1;i++){
        for(int j=2;j<=c-1;j++){
            avg = (arr[i+1][j+1]-arr[i-2][j+1]-arr[i+1][j-2]+arr[i-2][j-2])/9.0;
            std::cout<<round(avg*100.0)/100.0<<' ';
        }
        std::cout<<'\n';
    }
    return 0;
}