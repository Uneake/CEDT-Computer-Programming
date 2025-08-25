#include <iostream>

int arr[10],co;
std::string s;
main(){
    std::getline(std::cin>>std::ws,s);
    for(char c:s){
        if(c>='0'&&c<='9')arr[c-'0']++;
    }
    for(int i=0;i<10;i++){
        if(arr[i]);
        else {
            if(co==0){
                std::cout<<i;
                co=1;
            }
            else std::cout<<','<<i;
        }
    }
    if(co==0)std::cout<<"None";
}