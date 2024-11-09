#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b;
}

void subtract(int a, int b) {
    cout << a - b;
}

void multiply(int a, int b) {
    cout << a * b;
}

void divide(int a, int b) {
    if (b != 0) {  
        cout << a / b;
    } else {
        cout << "Error: Division by zero!"; 
    }
}

int main() {
    cout << "This is a calculator! \n";
    cout << "Select Any number from 1-4 \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division";
    
    int a = 0;
    cin >> a;
    cout << "\nSelect First Number \n";
    int b = 0;
    cin >> b;
    cout << "Select Second Number \n";
    int c = 0;
    cin >> c;


    if (a == 1) {
        add(b, c);
    } else if (a == 2) {
        subtract(b, c);
    } else if (a == 3) {
        multiply(b, c);
    } else if (a == 4) {
        divide(b, c);
    } else {
        cout << "\nPlease enter a valid operation!" << endl;
    }
    
    return 0;
}