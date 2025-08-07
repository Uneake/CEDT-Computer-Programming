#include <iostream>

std::string number,state[]={"Not a mobile number","Mobile number"};
bool ch=false;
main(){
    std::cin>>number;
    int l=number.length();
    if(l==10&&number[0]=='0'&&(number[1]=='6'||number[1]=='8'||number[1]=='9'))ch=true;
    std::cout<<state[ch];
}