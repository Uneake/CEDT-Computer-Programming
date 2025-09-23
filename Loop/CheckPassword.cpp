#include <iostream>

std::string s;
int u,l,n,p,strong,weak;
main(){
 while(std::cin>>s){
    u=l=n=p=strong=weak=0;
    if(s.length()>=12)strong++;
    if(s.length()>=8)weak++;
    for(char c:s){
      if(c>='A'&&c<='Z')u++;
      else if(c>='a'&&c<='z')l++;
      else if(c>='0'&&c<='9')n++;
      else p++;
    }
    std::cout<<">> ";
    if(u&&l&&n&&p&&strong)std::cout<<"strong\n";
    else if(u&&l&&n&&weak)std::cout<<"weak\n";
    else std::cout<<"invalid\n";
 }
}
