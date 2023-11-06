// Program to Check Whether a Year is a Leap Year or Not in C++
// Example
// Input : 2020
// Output : 2020 is a Leap Year

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int year;
    cout<<"Enter the year to check leap year or not: ";
    cin>>year;
    if((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }

    return 0;
}

// Condtions for Leap Year
// Following are the rules to predict if a given is a year leap or not. If any one of the conditions below is met then it's a leap year -
// 1. If a year is divisible by 400, it's a leap year.
// 2. If a year is divisible by 4 but not by 100 then its leap year