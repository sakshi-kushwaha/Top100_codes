//Find the Greatest of the Two Numbers in C++
// Example
// Input: 2,3
// Output: 3 is greater
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num1,num2 ;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is greater";
    }
    else{
        cout<<num2<<" is greater";
    }

    return 0;
}