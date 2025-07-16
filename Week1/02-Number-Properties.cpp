#include<iostream>
using namespace std;
class numbercheck{
    public:
    string even_or_odd(int n){
        if(n%2==0){
            return "even";
        }
        else{
            return "odd";
        }

    }
    string pos_neg_zero(int n){
        if(n>0){
            return "postive";

        }
        else if(n<0){
            return "negative";
        }
        else{
            return "zero";
        }
    }
    string no_of_digit(int n){
        if((n>=0 && n<=9)||(n<=-1 && n>=-9)){
            return "one digit";
        }
        else if((n>=10 && n<=99)||(n<=-10 && n>=-99)){
            return "two digit";
        }

        else{
            return "more than three digit";
        }

    }

};
int main(){
    numbercheck nc;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The number is "<<nc.even_or_odd(num)<<endl;
    cout<<"The number is "<<nc.pos_neg_zero(num)<<endl;
    cout<<"The number is "<<nc.no_of_digit(num)<<endl;

}