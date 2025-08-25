#include <iostream>
#include <functional>

int fee[1000],n,f,ans;
bool first=true;
std::string s,tmp;
main(){
    std::hash<std::string> hash_fn;
    std::cin>>n;
    while(n--){
        std::cin>>s>>f;
        fee[hash_fn(s)%1000]=f;
    }
    while(std::cin>>s){
        std::string t = s.substr(4,2);
        if(!first&&tmp!=t){
            ans+=fee[hash_fn(t)%1000];
        }
        first = false;
        tmp = t;
    }
    std::cout<<ans;
}