#include <iostream>
using namespace std;

int main() {
    int element;
    cout << "Welcome to the periodic table";
    cout << "Please type in the number of the element you want to see (1-20): ";
    cin >> element;

    switch (element) {
        case 1:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: H" << "\n";
            cout << "Name: Hydrogen" << "\n";
            cout << "Atomic mass: 1.0079" << "\n";
            break;

        case 2:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: He" << "\n";
            cout << "Name: Helium" << "\n";
            cout << "Atomic mass: 4.0026" << "\n";
            break;

        case 3:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Li" << "\n";
            cout << "Name: Lithium" << "\n";
            cout << "Atomic mass: 6.939" << "\n";
            break;

        case 4:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Be" << "\n";
            cout << "Name: Beryllium" << "\n";
            cout << "Atomic mass: 9.0122" << "\n";
            break;

        case 5:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: B" << "\n";
            cout << "Name: Boron" << "\n";
            cout << "Atomic mass: 10.811" << "\n";
            break;

        case 6:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: C" << "\n";
            cout << "Name: Carbon" << "\n";
            cout << "Atomic mass: 12.011" << "\n";
            break;

        case 7:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: N" << "\n";
            cout << "Name: Nitrogen" << "\n";
            cout << "Atomic mass: 14.006" << "\n";
            break;

        case 8:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: O" << "\n";
            cout << "Name: Oxygen" << "\n";
            cout << "Atomic mass: 15.999" << "\n";
            break;

        case 9:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: F" << "\n";
            cout << "Name: Fluorine" << "\n";
            cout << "Atomic mass: 18.998" << "\n";
            break;

        case 10:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Ne" << "\n";
            cout << "Name: Neon" << "\n";
            cout << "Atomic mass: 20.183" << "\n";
            break;

        case 11:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Na" << "\n";
            cout << "Name: Sodium" << "\n";
            cout << "Atomic mass: 22.989" << "\n";
            break;

        case 12:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Mg" << "\n";
            cout << "Name: Magnesium" << "\n";
            cout << "Atomic mass: 24.312" << "\n";
            break;

        case 13:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Al" << "\n";
            cout << "Name: Aluminium" << "\n";
            cout << "Atomic mass: 26.981" << "\n";
            break;

        case 14:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Si" << "\n";
            cout << "Name: Silicon" << "\n";
            cout << "Atomic mass: 28.086" << "\n";
            break;

        case 15:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: P" << "\n";
            cout << "Name: Phosphorus" << "\n";
            cout << "Atomic mass: 30.973" << "\n";
            break;

        case 16:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: S" << "\n";
            cout << "Name: Sulfur" << "\n";
            cout << "Atomic mass: 32.064" << "\n";
            break;

        case 17:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Cl" << "\n";
            cout << "Name: Chlorine" << "\n";
            cout << "Atomic mass: 35.453" << "\n";
            break;

        case 18:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Ar" << "\n";
            cout << "Name: Argon" << "\n";
            cout << "Atomic mass: 39.948" << "\n";
            break;

        case 19:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: K" << "\n";
            cout << "Name: Potassium" << "\n";
            cout << "Atomic mass: 39.0983" << "\n";
            break;

        case 20:
            cout << "Atomic number: " << element << "\n";
            cout << "Symbol: Ca" << "\n";
            cout << "Name: Calcium" << "\n";
            cout << "Atomic mass: 40.08" << "\n";
            break;

        default:
            cout << "IndexError: Index out of rage!";
            break;

    }

    return 0;
}
