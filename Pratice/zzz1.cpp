#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

  int maxPrime = sqrt(1e9) + 1;
    vector<bool> isPrimeArr(maxPrime, true);
    vector<int> primes1;

bool isPrime(int number)
{
	for (int divisor = 2; divisor * divisor <= number; divisor++)
	{
		if (number % divisor == 0)
			return false;
	}
	return true;
}

bool isPerfectSquare(int n) {
    int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

int findPrimeProduct(int start)
{


    
	vector<int> primes;
	 long long y = start + 1;
	 int cnt,k=0;
	while (primes.size() < 2)
	{

		if (isPrime(start)) primes.push_back(start);
		if (!isPrime(y) && !isPerfectSquare(y)) {
            bool hasSmallerFactor = false;
            for (int p : primes) {
                if (y % p == 0 && p < start) {
                    hasSmallerFactor = true;
                    break;
                }
            }
            if (!hasSmallerFactor) {
               cnt=y;
            }
    }
		start++;
	}
	return max(primes[0] * primes[1],y*k*cnt);
}

signed main()
{

	 for (int i = 2; i < maxPrime; i++) {
        if (isPrimeArr[i]) {
            primes1.push_back(i);
            for (int j = i * i; j < maxPrime; j += i) {
                isPrimeArr[j] = false;
            }
        }
    }
	int T; // Number of test cases
	cin >> T;

	while (T--)
	{
		int inputNumber;
		cin >> inputNumber;
		if (inputNumber == 1)
			inputNumber++;
		cout << findPrimeProduct(inputNumber) << endl;
	}

	return 0;
}

