#include <iostream>

int n,arr[100][4],mx_area=0;
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x_left_mx = std::max(arr[i][0],arr[j][0]);
            int x_right_mn = std::min(arr[i][2],arr[j][2]);
            int y_bottom_mx = std::max(arr[i][1],arr[j][1]);
            int y_top_mn = std::min(arr[i][3],arr[j][3]);
            if(x_right_mn>x_left_mx&&y_top_mn>y_bottom_mx){
                mx_area = std::max(mx_area,(x_right_mn-x_left_mx)*(y_top_mn-y_bottom_mx));
            }
        }
    }
    if(mx_area){
        std::cout<<"Max overlapping area = "<<mx_area<<'\n';
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x_left_mx = std::max(arr[i][0],arr[j][0]);
                int x_right_mn = std::min(arr[i][2],arr[j][2]);
                int y_bottom_mx = std::max(arr[i][1],arr[j][1]);
                int y_top_mn = std::min(arr[i][3],arr[j][3]);
                int area = (x_right_mn-x_left_mx)*(y_top_mn-y_bottom_mx);
                if(x_right_mn>x_left_mx&&y_top_mn>y_bottom_mx&&area==mx_area){
                    std::cout<<"rectangles "<<i<<" and "<<j<<'\n';
                }
            }
        }
    }
    else std::cout<<"No overlaps";
}
