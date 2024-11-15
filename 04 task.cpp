#include <iostream>
using namespace std;

int main(){

char grade;
cout <<"Please enter your grade from (A, B, C, D ,or F): ";
cin >>grade;
switch (grade){
    case 'A':
        cout <<"You got Excellent grade.";
        break;
    case 'B':
        cout <<"You got Good grade.";
        break;
    case 'C':
        cout <<"You got Satisfactory grade.";
        break;
    case 'D':
        cout <<"You got Below Average grade.";
        break;
    case 'F':
        cout <<"You got Unsatisfactory grade.";
        break;
    default:
        cout <<"You entered wrong grade must be A, B, C, D, or F.";
}

    return 0;
}