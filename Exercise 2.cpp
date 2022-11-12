#include <iostream>
using namespace std;

int main()
{
    // Step 1: variable declarations
    int base, height, hypotenuse, area, perimeter;

    // Step 2: Capture input from user
    cout<< "Height of Triangle: ";
    cin>> height;

    cout<< "Base of Triangle: ";
    cin>> base;

    cout<< "Hypotenuse of Triangle: ";
    cin>> hypotenuse;

    //Step 3: Maths Operations
    area= base/2 * height;
    perimeter= base + height + hypotenuse;

    //Step 4: Display output
    cout<< "Area = " <<area;
    cout<< "\n Perimeter = " <<perimeter;

    return 0;
}
