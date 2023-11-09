// C++ program to check sum of n numbers
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num, ans=0;
    cout<<"Enter the number:";
    cin>>num;
    
    for (int i=1;i<=num;i++){
        ans=ans+i;
    }
    cout<<ans;
    
    return 0;
}