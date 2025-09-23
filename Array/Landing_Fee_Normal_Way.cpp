#include <iostream>

int fee[1000],n,f,ans;
bool first=true;
std::string s,tmp,country[1000];
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>s>>f;
        country[i]=s;
        fee[i]=f;
    }
    while(std::cin>>s){
        std::string t = s.substr(4,2);
        if(!first&&tmp!=t){
            for(int i=0;i<n;i++){
                if(t==country[i]){
                    ans+=fee[i];
                    break;
                }
            }
        }
        first = false;
        tmp = t;
    }
    std::cout<<ans;
}
