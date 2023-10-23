#include <iostream>
using namespace std;

double computeTax(double subtotal);

const double SALES_TAX = 0.075;

int main(int argc, char*argv[]){
    double subtotal=10.0;
    double total = subtotal + computeTax(subtotal);

    cout << "The total will be: " << total << endl ;
}

double computeTax(double subtotal){ 

return subtotal*SALES_TAX;
}