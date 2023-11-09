// Prime Number Program in C++
// Example 
// Input : 5
// Output : The number 5 is Prime

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    bool isPrime= true;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<2){
        isPrime =false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    string result = isPrime ? "Prime" : "Not Prime";
    cout<<"The number "<<n<<" is "<<result;

    return 0;
}

