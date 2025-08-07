#include <iostream>
#include <string>

std::string id;
int n_12,tmp;
int main(){
    std::cin>>id;
    for(int i=0;i<12;i++){
        std::cout<<id[i];
        if(i==0||i==4||i==9||i==11)std::cout<<'-';
        tmp+=(13-i)*(id[i]-'0');
        tmp%=11;
    }
    tmp = 11 -tmp;
    n_12 = tmp%10;
    std::cout<<n_12;
    return 0;
}
