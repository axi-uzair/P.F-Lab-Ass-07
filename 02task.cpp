#include <iostream>
using namespace std;

int main(){

int num1, num2;
char oper;
cout <<"Please enter two integers: ";
cin >>num1 >>num2;
cout <<"Enter the operation(+, -, *, /) you want with tese two integers: ";
cin >>oper;
switch (oper){
    case '+':
        cout <<"The addition is: " <<num1+num2;
        break;
    case '-':
        cout <<"The subtraction is: " <<num1-num2;
        break;
    case '*':
        cout <<"The multiplication is: " <<num1*num2;
        break;
    case '/':
        cout <<"The divion is: " <<num1/num2;
        break;
    default:
        cout <<"Invalid operation! operation must be +, -, *, or /.";
}

    return 0;
}