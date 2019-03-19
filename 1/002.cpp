/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/


//Definition for singly-linked list.
#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result,*temp;
        int sum=l1->val + l2->val;
        temp=new ListNode(sum%10);
        l1=l1->next;
        l2=l2->next;
        int value=sum/10;
        result=temp;
        while(l1||l2){
            if(l1){
                sum=value+l1->val;
                l1=l1->next;
            }
            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
            }
            temp->next=new ListNode(sum%10);
            value=value/10;
            temp=temp->next;
        }
        if(value){
            temp->next=new ListNode(sum);
            return result;
        }
    }
};
int main(){
    Solution s;
    ListNode *l1=new ListNode(2);
    l1->next->val=4;
    l1->next->next->val=3;
    ListNode *l2=new ListNode(5);
    l2->next->val=6;
    l2->next->next->val=4;
    cout<<"断点测试----"<<endl;
    ListNode *result = s.addTwoNumbers(l1,l2);
    while(result){
        cout<<result->val<<"  ";
        result=result->next;
    }
}