#include <iostream>
#include <algorithm>

int pancake[1000],mx[1000],n,co=0;

bool sorted(int* a){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])return false;
    }
    return true;
}
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>pancake[i];
        mx[i]=pancake[i];
    }
    std::sort(mx,mx+n,std::greater<int>());
    int k=n;
    for(int i=0;i<n;i++){
        std::cout<<pancake[i]<<' ';
    }
    std::cout<<'\n';
    while(!sorted(pancake)){
        if(pancake[k-1]==mx[co]){
            k--;
            co++;
            continue;
        }
        else if(pancake[0]==mx[co]){
            for(int i=0;i<k/2 ;i++){
                std::swap(pancake[i],pancake[k-i-1]);
            }
            k--;
            co++;
        }
        else{
            int idx;
            for(int i=0;i<k;i++){
                if(pancake[i]==mx[co]){
                    idx=i+1;
                    break;
                }
            }
            for(int i=0;i<idx/2 ;i++){
                std::swap(pancake[i],pancake[idx-i-1]);
            }
        }
        for(int i=0;i<n;i++){
            std::cout<<pancake[i]<<' ';
        }
        std::cout<<'\n';
    }
}
