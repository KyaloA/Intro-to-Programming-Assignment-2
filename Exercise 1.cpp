#include <iostream>
using namespace std;

int main()
{
    // Step 1: variable declarations
    string first_name, last_name, favorite_meal, favorite_movie;

    // Step 2: Capture input from user
    cout<< "Please Enter your First Name: ";
    cin>> first_name;

    cout<< "Please Enter your Last Name: ";
    cin>> last_name;

    cout<< "Please Enter the Name of your Favorite Meal: ";
    cin>> favorite_meal;

    cout<< "Please Enter the name of your Favorite Movie: ";
    cin>> favorite_movie;

    // Step 3: Display the User's Information
    cout<< "USER PROFILE";
    cout<<"\n First Name: "<<first_name;
    cout<<"\n Last Name: "<<last_name;
    cout<<"\n Full Name: "<<first_name <<" " <<last_name;
    cout<<"\n Favorite Meal: "<<favorite_meal;
    cout<<"\n Favorite Movie: "<<favorite_movie;

    return 0;
}