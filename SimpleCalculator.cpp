/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/


#include<iostream>
using namespace std;

int main(){
    cout<<"**********SIMPLE CALCULATOR**********"<<endl;
    cout<<"--------------------------------------------"<<endl;

    char opearator;
    double num1,num2;

    cout<<"Enter two number"<<endl;
    cout<<"Number 1: ";
    cin>>num1;
    cout<<"Number 2: ";
    cin>>num2;
    cout<<"Enter the operation you want to perform(+,-,*,/): "<<endl;
    cin>>opearator;
    

    switch(opearator){
        case '+':
              cout<<num1<<opearator<<num2<<" = "<<num1+num2<<endl;
              break;
        case '-':
              cout<<num1<<opearator<<num2<<" = "<<num1-num2<<endl;
              break;
        case '*':
              cout<<num1<<opearator<<num2<<" = "<<num1*num2<<endl;
              break;
        case '/':
            if(num2==0.0){
                cout<<"Dividing by 0 is undefined"<<endl;
            }
            else{
                cout<<num1<<opearator<<num2<<" = "<<num1/num2<<endl;
            }
            break;

            default:
            cout<<"Invalid operator!! Enter a valid opearator"<<endl;
    }
    return 0;
}