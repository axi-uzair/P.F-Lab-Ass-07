#include <iostream>
using namespace std;

int main() {

double balance = 0.0;
int choose;
double amount;

while (true) {
    cout <<":BANK SYSTEM MENU:\n";
    cout <<"1. Deposit\n";
    cout <<"2. Withdraw\n";
    cout <<"3. Check Balance\n";
    cout <<"4. Exit\n";
    cout <<"Please select an option (1-4): ";
    cin >>choose;
    switch (choose) {
        case 1:
            cout<< "Enter amount to deposit: $";
            cin>> amount;
            if (amount > 0){
                balance = balance + amount;
                cout <<"$" <<amount <<" deposited successfully.\n";
            }
            else
                cout <<"Invalid amount! Please enter a positive number.\n";
            break;
        case 2:
            cout <<"Enter amount to withdraw: $";
            cin >>amount;
            if (amount > 0 && amount <= balance){
                balance -= amount;
                cout <<"$" <<amount <<" withdrawn successfully.\n";
            }
            else if (amount > balance){
                cout <<"Insufficient funds! You only have $" <<balance <<" in your account.\n";
            }
            else {
                cout <<"Invalid amount! Please enter a positive number.\n";
            }
            break;
        case 3:
            cout <<"Your current balance is: $" <<balance <<endl;
            break;
        case 4:
            cout <<"Thank you for using the bank system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please enter between (1-4).\n";
            break;
    }
}

return 0;
}
