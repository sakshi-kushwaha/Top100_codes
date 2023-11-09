// Find the Sum of Numbers in a Given Range in C++
// Example
// Input : 2 5
// Output : 2 + 3 + 4 + 5 + 6 = 20
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num1,num2, ans=0;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    for (int i=num1;i<=num2;i++){
        ans=ans+i;
    }
    cout<<ans;

    return 0;
}