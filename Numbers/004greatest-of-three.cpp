//Find the Greatest of the Three Numbers in C++
// Example
// Input: 2,3,1
// Output: 3 is greatest
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num1,num2,num3 ;
    cout<<"Enter three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3){
        cout<<num1<<" is greatest";
    }
    else if(num2>=num1 && num2>=num3){
        cout<<num2<<"is greatest";
    }
    else{
        cout<<num3<<" is greatest";
    }

    return 0;
}