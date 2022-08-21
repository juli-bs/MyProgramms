#include "app.h"

#include <iostream>

#include "editor.h"

using namespace std;


Editor balanceEditor("Balance.txt");
Editor receiptEditor("Receipt.txt");
Editor sumEditor("Sum.txt");


void mainloop() {
   double credit = stod(balanceEditor.read());
   double sum = stod(sumEditor.read());
   
   while(true) {
      system("cls");
      cout << "Your current account balance: " << credit << endl << endl << endl;

      showOptions();   
      cout << endl << "Option: ";
      string option;
      cin >> option;

      
   }
}

void editReceipt() {

}

void showOptions() {
   cout << "<1> - In" << endl;
   cout << "<2> - Out" << endl;
   cout << "<3> - Show Receipt" << endl;
   cout << "<4> - Reset Receipt" << endl;
}