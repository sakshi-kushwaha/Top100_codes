// Armstrong Number in C++
// Example = 407 (order/length = 3)
// 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
#include <iostream>
#include<math.h>
using namespace std;

int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}

bool armstrong(int num, int len){

    int sum = 0, temp, digit;
    temp = num;
    
    // loop to extract digit, find power & add to sum
    while(temp != 0)
    {
        // extract digit
        digit = temp % 10;

        // add power to sum
        sum = sum + pow(digit,len);
        temp /= 10;
    };

    return num == sum;
}

// Driver Code
int main ()
{
    //variables initialization
    int num, len;
    cout<<"enter the number :";
    cin>>num;
 
    // function to get order(length)
    len = order(num);
    
    // check if Armstrong
    if (armstrong(num, len))
        cout << num << " is armstrong";
    else
        cout << num << " is not armstrong";


    return 0;
}