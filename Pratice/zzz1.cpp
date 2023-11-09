#include <iostream> 
using namespace std; 

void calculateResult(long long int numerator, long long int denominator) 
{ 
    long long int remainder = numerator % denominator; 
    if (remainder == 0 && numerator) 
    { 
        cout << denominator / 2 << endl; 
    } 
    else if (numerator < denominator) 
    { 
        cout << remainder / 2 << endl; 
    } 
    else 
    { 
        int remainder0 = (remainder + denominator); 
        int remainder1 = ((remainder / 2) % denominator); 
        remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator); 
        int remainder2 = ((remainder0) / 2) % denominator; 
        remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator); 
        if (remainder2 > remainder1) 
        { 
            cout << remainder0 / 2 << endl; 
        } 
        else 
        { 
            cout << remainder / 2 << endl; 
        } 
    } 
} 

int main() 
{ 
    // your code goes here 
    int numCases; 
    cin >> numCases; 
    for (int i = 0; i < numCases; i++) 
    { 
        long long int numerator, denominator; 
        cin >> numerator >> denominator; 
        calculateResult(numerator, denominator); 
    } 
    return 0; 
}



