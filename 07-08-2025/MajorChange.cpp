#include <iostream>

std::string id[2];
double GPAX[2];
char cp[2],cal_1[2],cal_2[2];
int chosen_one=-1,choose_count=0;

main(){
    for(int i=0;i<2;i++){
        std::cin>>id[i]>>GPAX[i]>>cp[i]>>cal_1[i]>>cal_2[i];
        if(cp[i]=='A'&&(cal_1[i]<='C')&&(cal_2[i]<='C')){ //use ASCII to compare (A<B<C<...<Z)
            if(i==0){
                chosen_one=0; //Choose first student (we will change the chosen one after comparing)
                choose_count++;
            }
            else{
                if(chosen_one==-1){ //check that we haven't chosen yet
                    chosen_one=1; //then choose this guy
                    choose_count++;
                }
                else{
                    if(GPAX[1]>GPAX[0])chosen_one=1;
                    else if(GPAX[1]==GPAX[0]){
                        if(cal_1[1]<cal_1[0])chosen_one=1; //use ASCII to compare (A<B<C<...<Z)
                        else if(cal_1[1]==cal_1[0]){
                            if(cal_2[1]<cal_2[0])chosen_one=1; //use ASCII to compare (A<B<C<...<Z)
                            else if(cal_2[1]==cal_2[0]){
                                choose_count++; //both students are chosen
                            }
                        }
                    }
                }
            }
        }
    }
    if(choose_count==2)std::cout<<"Both";
    else if(choose_count==1)std::cout<<id[chosen_one];
    else std::cout<<"None";

}
