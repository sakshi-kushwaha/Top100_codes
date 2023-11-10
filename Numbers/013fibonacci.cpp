#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int a = 0, b = 1;
    
    cout << a << ", " << b << ", ";
    
    int nextTerm;
    
    // printing the rest of the terms here
    for(int i = 2; i < num; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        cout << nextTerm << ", ";
    }

    return 0;
}