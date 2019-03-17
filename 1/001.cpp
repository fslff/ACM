
#include<iostream>
using namespace std;

int twoSum(int nums[4], int target) {
    int result[2]={0};
    
    //int len=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
            }
        }   
    }
    return 0;
}   

int main()
{
    int nums[]={2,7,11,15};
    int result=twoSum(nums,9); 
   // cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
    return 0;
}
