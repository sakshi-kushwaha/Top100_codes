// Palindrome or not
// A number is a Palindrome number if the reverse of the number and the numbers itself are equal i.e. if the number and its reverse are the same then a number is a palindrome number.

// Example :
// Number : 12321
// Reverse : 12321
#include <iostream>
using namespace std;

int main() {
    int num, reverse=0, rem, temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    while(temp!=0){
        rem = temp%10;
        reverse = reverse*10+rem;
        temp = temp/10;
    };
    if(num==reverse)
        cout<<num<<" is Palindrome";
    else
        cout<<num<<" is not Palindrome";

    return 0;
}