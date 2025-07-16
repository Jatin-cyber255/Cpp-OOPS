#include<stdio.h>
#include <iostream>
class grade_calculator{
    public:
    int total(int m,int e,int s,int sst,int c){
        return m+e+s+sst+c;
    }
    int average(int m,int e,int s,int sst,int c){
        return (double) total(m,e,s,sst,c)/5;
    }
    char grade(int m,int e,int s,int sst,int c){
        double avg=average(m,e,s,sst,c);

        if(avg>90){
            return 'A';
        }
         if(avg>80 && avg <=89){
            return 'B';
        }
        if(avg>70 && avg <=79){
            return 'C';
        }
        if(avg>60 && avg <=69){
            return 'D';
        }

        if(avg<60){
            return 'F';
        }

    }

};
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter marks in Maths: ";
    cin>>a;
    cout<<"Enter marks in English: ";       
    cin>>b;
    cout<<"Enter marks in Science: ";
    cin>>c;
    cout<<"Enter marks in SST: ";
    cin>>d;
    cout<<"Enter marks in Computer: ";
    cin>>e;
    grade_calculator gc;
    gc.total(a,b,c,d,e);
    grade_calculator g;
    int total=g.total(a,b,c,d,e);
    char grade=g.grade(a,b,c,d,e);
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<g.average(a,b,c,d,e)<<endl;
    cout<<"Grade: "<<grade<<endl;

}