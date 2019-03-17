#include<iostream>
int main(){
    int currVal=0,val=0;
    if(std::cin>>currVal){
        int len=0,cnt=1;
        while(std::cin>>val){
            ++len;
            if(currVal==val){
                cnt++;
            }else{
                std::cout<<currVal<<" occurs "<<cnt<<" times."<<std::endl;
                currVal=val;
                cnt=1;
            }
        }
      //  std::cout<<currVal<<" occurs "<<cnt<<" times."<<std::endl;
      std::cout<<len<<std::endl;
    }
    return 0;
}