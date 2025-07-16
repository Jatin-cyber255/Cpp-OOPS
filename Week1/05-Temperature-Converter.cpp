#include<iostream>
class temperature{
    public:
    int tocelcius(int t,int unit){
        if(unit == 'C'){
            return t;
        }
        else if(unit == 'K'){
            return t - 273;
        }
        else if(unit == 'F'){
            return (t - 32) * 5 / 9;
        }
        return -1; 


    }
    int tokelvin(int t,int unit){
        if(unit == 'C'){
            return t + 273;
        }
        else if(unit == 'K'){
            return t;
        }
        else if(unit == 'F'){
            return (t - 32) * 5 / 9 + 273;
        }
        return -1;  


    }
    int tofarenheit(int t,int unit){
        if(unit == 'C'){
            return (t * 9 / 5) + 32;
        }
        else if(unit == 'K'){
            return (t - 273) * 9 / 5 + 32;
        }
        else if(unit == 'F'){
            return t;
        }
        return -1;

    }
};
using namespace std;
int main(){
    double temp;
    cout<<"Enter temperature: ";
    cin>>temp;
    char unit;
    cout<<"Enter unit (C for Celsius, K for Kelvin, F for Fahrenheit): ";
    cin>>unit;
    temperature t;
    if(unit=='C'){
        cout<<"Temperature in Kelvin: "<<t.tokelvin(temp, unit)<<endl;
        cout<<"Temperature in Fahrenheit: "<<t.tofarenheit(temp, unit)<<endl;
    }
    else if(unit=='K'){
        cout<<"Temperature in Celsius: "<<t.tocelcius(temp, unit)<<endl;
        cout<<"Temperature in Fahrenheit: "<<t.tofarenheit(t.tocelcius(temp, unit), 'C')<<endl;
    }
    else if(unit=='F'){
        cout<<"Temperature in Celsius: "<<t.tocelcius(temp, unit)<<endl;
        cout<<"Temperature in Kelvin: "<<t.tokelvin(temp, unit)<<endl;
    }
    else{
        cout<<"Invalid unit"<<endl;
    }
}