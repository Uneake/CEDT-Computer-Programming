#include <iostream>

std::string id[2];
double GPAX[2];
char cp[2],cal_1[2],cal_2[2];
int choosen_one=-1,choose_count=0;

main(){
    for(int i=0;i<2;i++){
        std::cin>>id[i]>>GPAX[i]>>cp[i]>>cal_1[i]>>cal_2[i];
        if(cp[i]=='A'&&(cal_1[i]<='C')&&(cal_2[i]<='C')){
            if(i==0){
                choosen_one=0;
                choose_count++;
            }
            else{
                if(choosen_one==-1){
                    choosen_one=1;
                    choose_count++;
                }
                else{
                    if(GPAX[1]>GPAX[0])choosen_one=1;
                    else if(GPAX[1]==GPAX[0]){
                        if(cal_1[1]<cal_1[0])choosen_one=1;
                        else if(cal_1[1]==cal_1[0]){
                            if(cal_2[1]<cal_2[0])choosen_one=1;
                            else if(cal_2[1]==cal_2[0]){
                                choose_count++;
                            }
                        }
                    }
                }
            }
        }
    }
    if(choose_count==2)std::cout<<"Both";
    else if(choose_count==1)std::cout<<id[choosen_one];
    else std::cout<<"None";
}