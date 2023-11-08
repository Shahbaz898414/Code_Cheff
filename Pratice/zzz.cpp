
#include <bits/stdc++.h>
using namespace std;

int calculateScore(int totalPlayers, int currentPlayer, int rounds)
{

    int sum = 0;
    sum += ((currentPlayer % rounds) + (totalPlayers - currentPlayer));

    return (currentPlayer % rounds) * ((totalPlayers - currentPlayer) % rounds);
}

int main()
{

    int T, N;
    cin >> T;

    while (T--)
    {

        long long int numerator;
        long long int denominator;

        cin >> numerator >> denominator;

        // int remainder0 = (remainder + denominator);
        // int remainder1 = ((remainder / 2) % denominator);
        // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
        // int remainder2 = ((remainder0) / 2) % denominator;
        // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
        // if (remainder2 > remainder1)
        // {
        //     cout << remainder0 / 2 << endl;
        // }
        // else
        // {
        //     cout << remainder / 2 << endl;
        // }

        long long int remainder = numerator % denominator;

        // int remainder0 = (remainder + denominator);
        // int remainder1 = ((remainder / 2) % denominator);
        // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
        // int remainder2 = ((remainder0) / 2) % denominator;
        // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
        // if (remainder2 > remainder1)
        // {
        //     cout << remainder0 / 2 << endl;
        // }
        // else
        // {
        //     cout << remainder / 2 << endl;
        // }
        if (remainder == 0 && numerator)
        {
            cout << denominator / 2 << endl;

            // int remainder0 = (remainder + denominator);
            // int remainder1 = ((remainder / 2) % denominator);
            // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
            // int remainder2 = ((remainder0) / 2) % denominator;
            // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
            // if (remainder2 > remainder1)
            // {
            //     cout << remainder0 / 2 << endl;
            // }
            // else
            // {
            //     cout << remainder / 2 << endl;
            // }
        }
        else if (numerator < denominator)
        {
            cout << remainder / 2 << endl;

            // int remainder0 = (remainder + denominator);
            // int remainder1 = ((remainder / 2) % denominator);
            // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
            // int remainder2 = ((remainder0) / 2) % denominator;
            // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
            // if (remainder2 > remainder1)
            // {
            //     cout << remainder0 / 2 << endl;
            // }
            // else
            // {
            //     cout << remainder / 2 << endl;
            // }
        }
        else
        {
            int remainder0 = (remainder + denominator);
            int remainder1 = ((remainder / 2) % denominator);
            remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
            int remainder2 = ((remainder0) / 2) % denominator;
            remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);

            // int remainder0 = (remainder + denominator);
            // int remainder1 = ((remainder / 2) % denominator);
            // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
            // int remainder2 = ((remainder0) / 2) % denominator;
            // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
            // if (remainder2 > remainder1)
            // {
            //     cout << remainder0 / 2 << endl;
            // }
            // else
            // {
            //     cout << remainder / 2 << endl;
            // }
            if (remainder2 > remainder1)
            {
                cout << remainder0 / 2 << endl;

                // int remainder0 = (remainder + denominator);
                // int remainder1 = ((remainder / 2) % denominator);
                // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
                // int remainder2 = ((remainder0) / 2) % denominator;
                // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
                // if (remainder2 > remainder1)
                // {
                //     cout << remainder0 / 2 << endl;
                // }
                // else
                // {
                //     cout << remainder / 2 << endl;
                // }
            }
            else
            {
                cout << (remainder / 2) << endl;

                // int remainder0 = (remainder + denominator);
                // int remainder1 = ((remainder / 2) % denominator);
                // remainder1 = remainder1 * ((numerator - (remainder) / 2) % denominator);
                // int remainder2 = ((remainder0) / 2) % denominator;
                // remainder2 = remainder2 * ((numerator - (remainder0) / 2) % denominator);
                // if (remainder2 > remainder1)
                // {
                //     cout << remainder0 / 2 << endl;
                // }
                // else
                // {
                //     cout << remainder / 2 << endl;
                // }
            }
        }
    }

    return 0;
}

/*







*/

