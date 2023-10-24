#include <iostream>
using namespace std;
const double SALES_TAX = 0.075;

void computeTax(double subTotal, double& tax, double& total, double taxRate = SALES_TAX);

int main(int argc, char*argv[]){

    double subtotal = 10.0;
    double tax = 0;
    double total = 0;

    computeTax(subtotal,tax,total);
    
    cout << "The total will be: " << total << endl ;
    cout << "Your tax will be " << tax << endl ;
}
 
void computeTax(double subTotal,double& tax, double& total,double taxRate){ //invece che ritornare il valore totale modifico le variabili nel main

    tax = subTotal*taxRate;
    total = subTotal + tax;

}