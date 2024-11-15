#include <iostream>
using namespace std;

int main(){

int month;
cout <<"please enter a month in number form from (1-12), for e.g. 1 for january: ";
cin >>month;
switch (month){
    case '12':
        cout <<"Winter";
        break;
    case '1':
        cout <<"Winter";
        break;
    case '2':
        cout <<"Winter";
        break;
    case '3':
        cout <<"Spring";
        break;
    case '4':
        cout <<"Spring";
        break;
    case '5':
        cout <<"Spring";
        break;
    case '6':
        cout <<"Summer";
        break;
    case '7':
        cout <<"Summer";
        break;
    case '8':
        cout <<"Summer";
        break;
    case '9':
        cout <<"Fall";
        break;
    case '10':
        cout <<"Fall";
        break;
    case '11':
        cout <<"Fall";
        break;
    default:
        cout <<"Invalid number! Number mus be between (1-12).";
}

    return 0;
}