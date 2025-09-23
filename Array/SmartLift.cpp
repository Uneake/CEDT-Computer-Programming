#include <iostream>

int arr[100000][2],n,st,en,m,mn,idx;
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        int t;std::cin>>t;
        t--;
        std::cin>>arr[t][0]>>arr[t][1];
    }
    std::cin>>m;
    while (m--){
        std::cin>>st>>en;
        idx=1;
        for(int i=0;i<n;i++){
            int t;
            if(arr[i][0]>=arr[i][1]&&st>=en&&st<=arr[i][0]&&st>=arr[i][1]){
                t = std::max(0,arr[i][1]-en);
            }
            else if(arr[i][0]<arr[i][1]&&st<en&&st>=arr[i][0]&&st<=arr[i][1]){
                t = std::max(0,en-arr[i][1]);
            }
            else {
                t = abs(st-arr[i][1])+abs(en-st);
            }
            if(i==0)mn = t;
            else if(t<mn){
                mn=t;
                idx=i+1;
            }
        }
        std::cout<<">> "<<idx<<'\n';
    }
    
}
