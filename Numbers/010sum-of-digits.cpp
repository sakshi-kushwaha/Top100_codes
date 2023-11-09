// Sum of digits of a Number in C++
// Eg: number = 12345
// Sum of digit of number = 1 + 2 + 3 + 4 + 5
// Sum = 15

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0){
        sum=sum+n%10;
        n = n/10;
    }
    cout<<"sum of digits is: " <<sum;

    return 0;
}