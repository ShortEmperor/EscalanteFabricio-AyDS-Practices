#include <iostream>
using namespace std;

int main(){
    double sideA, sideB, sideC;
    cout << "Type in the first side of the triangle: ";
    cin >> sideA;
    cout << "Type in the second side of the triangle: ";
    cin >> sideB;
    cout << "Type in the third side of the triangle: ";
    cin >> sideC;

    if(sideA == sideB and sideB == sideC){
        cout << "The triangle is equilateral!";
    }else if(sideA == sideB || sideB == sideC || sideA == sideC){
        cout << "The triangle is Isosceles";
    }else{
        cout << "The triangle is Scalene";
    }
    return 0;
}