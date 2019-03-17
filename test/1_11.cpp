#include<iostream>
int main(){
    std::cout<<"Please input two numbers:"<<std::endl;
    int a,b,min=0,max=0;
    std::cin>>a>>b;
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    while(min<max-1){
        std::cout<<min+1<<"  ";
        min++;
    }
    return 0;
}