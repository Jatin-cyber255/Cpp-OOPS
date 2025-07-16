#include<stdio.h>
#include <iostream>
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int subtract(int a,int b){
        return a-b;
    }
    int multiply(int a,int b){
        return a*b;
    }
    int divide(int a,int b){
        return a/b;
    }



};
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    char o;
    cout<<"Enter operator:";
    cin>>o;
    calculator calc;
    if(o=='+'){
        cout<<calc.add(a,b);
    }
      if(o=='-'){
        cout<<calc.subtract(a,b);
    }
      if(o=='*'){
        cout<<calc.multiply(a,b);
    }
      if(o=='/'){
        cout<<calc.divide(a,b);
    }
    
    

}