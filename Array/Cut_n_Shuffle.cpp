#include <iostream>

std::string top[30],bottom[30],command;
int n;
main(){
    std::cin>>n;
    int half = n/2;
    for(int i=0;i<half;i++){
        std::cin>>top[i];
    }
    for(int i=0;i<half;i++){
        std::cin>>bottom[i];
    }
    std::getline(std::cin>>std::ws,command);
    for(char c:command){
        if(c=='C'){
            for(int i=0;i<half;i++){
                std::string tmp=top[i];
                top[i]=bottom[i];
                bottom[i]=tmp;
            }
        }
        if(c=='S'){
            std::string tmp[n+5];{
                for(int i=0;i<n;i+=2)tmp[i]=top[i/2];
                for(int i=1;i<n;i+=2)tmp[i]=bottom[i/2];
                for(int i=0;i<half;i++)top[i]=tmp[i];
                for(int i=0;i<half;i++)bottom[i]=tmp[half+i];
            }
        }
    }
    for(int i=0;i<half;i++){
        std::cout<<top[i]<<' ';
    }
    for(int i=0;i<half;i++){
        std::cout<<bottom[i]<<' ';
    }
}
