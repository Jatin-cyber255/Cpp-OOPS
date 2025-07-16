#include<stdio.h>
#include <iostream>
class simpleinterest{
    public:
    double interest(int p,int r,int t){
        return(double(p*r*t)/100);
    }



};
using namespace std;
int main(){
   int principal,rate,time;
   cout<<"enter principal:";
   cin>>principal;
   cout<<"Enter rate: ";
   cin>>rate;
   cout<<"Enter time: ";
   cin>>time;
   simpleinterest si;
   cout<<"simple interest: "<<si.interest(principal,rate,time);




}