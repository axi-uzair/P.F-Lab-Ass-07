#include <iostream>
using namespace std;

int main(){

char light;
cout <<"Please enter a color from (R, G, Y for red, green, yellow: "<<endl;
cin >>light;
switch (light){
    case 'R':
        cout <<"R: 'Stop'";
        break;
    case 'G':
        cout <<"G: 'Go'";
        break;
    case 'Y':
        cout <<"Y: 'Slow Down'";
        break;
    default:
        cout <<"\nInvalid input! Please enter R, G, or Y.";
}

    return 0;
}