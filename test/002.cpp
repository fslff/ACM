#include<iostream>
using namespace std;
struct ListNode
{
    double value;
    ListNode *next;
};
int main(){
    ListNode *head = nullptr;
    head=new ListNode;
    head->value=2.5;
    head->next=nullptr;
    ListNode *secondPtr=new ListNode;
    secondPtr->value=3.5;
    head->next=secondPtr;
    ListNode *thirdPtr=new ListNode;
    thirdPtr->value=5;
    secondPtr->next=thirdPtr;
    cout<<"First value is "<<head->value<<endl;
    cout<<"Second value is "<<head->next->value<<endl;
    cout<<"third value is "<<head->next->value<<endl;
}