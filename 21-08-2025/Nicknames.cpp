#include <iostream>

std::string s,name[15],nickname[15];
main(){
    name[0]="Robert";nickname[0]="Dick";
    name[1]="William";nickname[1]="Bill";
    name[2]="James";nickname[2]="Jim";
    name[3]="John";nickname[3]="Jack";
    name[4]="Margaret";nickname[4]="Peggy";
    name[5]="Edward";nickname[5]="Ed";
    name[6]="Sarah";nickname[6]="Sally";
    name[7]="Andrew";nickname[7]="Andy";
    name[8]="Anthony";nickname[8]="Tony";
    name[9]="Deborah";nickname[9]="Debbie";
    int n;std::cin>>n;
    while(n--){
        std::cin>>s;
        bool ch=false;
        for(int i=0;i<10;i++){
            if(name[i]==s){
                std::cout<<nickname[i]<<"\n";
                ch=true;
                break;
            }
            else if(nickname[i]==s){
                std::cout<<name[i]<<"\n";
                ch=true;
                break;
            } 
        }
        if(!ch)std::cout<<"Not found\n";
    }
}