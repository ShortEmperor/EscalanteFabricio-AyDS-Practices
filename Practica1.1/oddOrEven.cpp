#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Type in the number to check: ";
    cin >> number;
    if (number % 2 == 0){
        cout << "The number is even";
    }else{
        cout << "The number is odd";
    }
    return 0;
}