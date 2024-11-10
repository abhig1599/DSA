// Task 5: Conditional Statements (if-else)
// Objective: Implement basic decision-making.

// Task: Write a program that asks for a user's age and checks if they are eligible to vote.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age>=18) {
        cout<<"Good to Go for Vote";
    }
    else {
        cout<<"You Can't Vote";
    }
}