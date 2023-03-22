//Program 2(a)

#include <bits/stdc++.h>
using namespace std;

void RandomNumber(long long int Xo, long long int m, long long int a, long long int b, long long int n, long long int maxR){
    long long int last = Xo;

    for (int i = 1; i < n; i++){
        last = ((last * a) + b) % m;

        last = last % maxR;
        cout << last << endl;
    }
}

int main()
{
    long long int Xo = 73;  // Seed value
    long long int m = 121; // Modulus parameter
    long long int a = 5;     // Multiplier term
    long long int b = 2;   // Increment term

    int n = 20;

    RandomNumber(Xo, m, a, b, n, 100);

    return 0;
}
