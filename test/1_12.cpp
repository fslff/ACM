#include<iostream>
int main(){
    // int sum=0;
    // for(int i=50; i<=100;++i){
    //     sum+=i;
    // }
    // std::cout<<"The result is:"<<sum;

    // for(int i=10;i>=0;i--){
    //     std::cout<<i<<"  ";
    // }
    std::cout<<"Please input two numbers:";
    int a,b,min,max;
    std::cin>>a>>b;
    min=(a<b)?a:b;
    max=(a>b)?a:b;
    for(min;min<max;min++){
        std::cout<<min<<"  ";
    }
    std::cout<<std::endl;
    return 0;
}