#include <iostream>


using namespace std;

void showMenu(){

    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw " << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main(){
    
    //check balance, deposit, withdraw money, show menu

    int option;
    double balance = 500;


    do{


    showMenu();
    cout << "Please Choose an Option: " << endl;
    cin >> option;
    //system("cls");

    switch(option){
        case 1:cout << "Balance is: " << "£" << balance << endl; break;
        case 2:cout << "Deposit Amount: ";
             double depositAmount;
             cin >> depositAmount;
             balance += depositAmount;
             cout << "Your New balance is: " << balance <<endl;
             break;
        case 3:cout << "Withdraw Amount: ";
             double WithdrawAmount;
             cin >> WithdrawAmount;
             if (WithdrawAmount <= balance)
                 balance -= WithdrawAmount;
             else
                 cout << "Not Enough Money" << endl;
             break;

               }

    }while(option!=4);

    return 0;
}