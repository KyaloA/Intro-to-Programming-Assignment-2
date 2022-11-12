#include <iostream>
using namespace std;

int main()
{
    // Step 1: variable declarations
    int buying_price, selling_price, profit;

    // Step 2: Capture input from user
    cout<< "Please Enter the Buying Price: ";
    cin>> buying_price;

    cout<< "Please Enter the Selling Price: ";
    cin>> selling_price;

    //Step 3: Math operations
    profit= selling_price - buying_price;

    //Step 4: Display Results
    cout<< "Profit = " <<profit;

    return 0;
}