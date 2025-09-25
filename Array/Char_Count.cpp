#include <iostream>

int arr[256];
std::string s;
main(){
    std::getline(std::cin>>std::ws,s);
    for(char c:s){
        arr[tolower(c)]++;
    }
    for(int i='a';i<='z';i++){
        if(arr[i])std::cout<<(char)i<<" -> "<<arr[i]<<'\n';
    }
}
