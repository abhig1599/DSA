// Task 4: Basic Arithmetic Operations
// Objective: Perform simple arithmetic operations.

// Task: Write a program that adds, subtracts, multiplies, and divides two numbers.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the first number: ";
    // cout << "Enter the two number: ";
    // cin >> a >> b;
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << (double)a / b << endl;
    return 0;
}