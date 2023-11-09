// C++ program to check whether number is postive or negative
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if (num>0){
        cout<<"Positive";
    }
    else if(num<0){
        cout<<"Negative";
    }
    else{
        cout<<"zero";
    }

    return 0;
}