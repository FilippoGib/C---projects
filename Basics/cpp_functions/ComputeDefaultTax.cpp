//function used to add taxes to a purcahse with a default interest

#include <iostream>
using namespace std;
const double SALES_TAX = 0.075;

double computeTax(double subtotal,double taxRate = SALES_TAX);

int main(int argc, char*argv[]){

    double subtotal;
    double newTax;

    cout << "What is your bill? ";
    cin >> subtotal;

    cout << "That is the subtax? ";
    cin >> newTax;

    double total = subtotal + computeTax(subtotal);
    double total2 = subtotal + computeTax(subtotal, newTax);
    
    cout << "The total will be: " << total << endl ;
    cout << "The second total will be " << total2 << endl ;
}

double computeTax(double subtotal,double taxRate /* se ho inserito un valore di default nella dichiarazione iniziale non posso riportarlo di nuovo! */){ 

    return subtotal*taxRate;

}