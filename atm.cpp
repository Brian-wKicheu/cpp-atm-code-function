#include <iostream>
using namespace std;

void showMenu(){
    cout << "*****ATM MENU *****"<< endl;
    cout << "1. Check balance"<< endl;
    cout << "2. Deposit"<< endl;
    cout << "3. Withdraw"<< endl;
    cout << "4. Exit"<< endl;
}

int main(){
    //atm functionality i.e check balance, deposit, withdraw, show menu.
    //declare options: 1, 2, 3
    //use switch statement to show balance, deposit and withdraw amount
    //now iterate the loop using do...while since it executes if the loop is true or false basing on option entered

    int option;
    double balance = 600;

    showMenu();
    cout << "Enter option:";
    cin >> option;
    
       do {
             switch (option)
                 {
                   case 1:
                        cout <<"Your balance is : $" << balance <<" /=";
                    break;
                   case 2:
                       cout <<"Deposit amount : " ;
                       double depositAmount;
                       cout <<"enter amount to be deposited :";
                       cin >> depositAmount;
                       balance += depositAmount;
                    break;
                    case 3:
                       cout <<"Withdral amount : " ;
                       double withdrawAmount;
                       cout <<"enter amojunt to be withdrawn :";
                       cin >> withdrawAmount;

                       if(withdrawAmount <= balance)
                          balance -= withdrawAmount;
                       else
                          cout << "You have insufficient amount : "<< balance ;
                    break;
    
                    default:
                        cout <<" You have entered invalid choice";
                    break;
               }
            }
        while (option !=4);
     

} 