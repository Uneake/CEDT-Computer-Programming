#include <iostream>

char grade;
main(){
    double score; std::cin>>score;
    if(score<50)grade='F';
    else if(score<60)grade='D';
    else if(score<70)grade='C';
    else if(score<80)grade='B';
    else grade='A';
    std::cout<<grade;
}
