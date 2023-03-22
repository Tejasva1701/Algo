//Program 1

#include <bits/stdc++.h>
using namespace std;


void StringMatch(string T, string P, int n, int m) {
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++)
            if (T[i + j] != P[j])
                break;
                
        if (j == m)
        {
            cout << "Given Pattern 'P' occurs with Shift " << i << " in Text 'T'. "<< endl;
            return;
        }
    }
    cout << "Given Pattern NOT found in the Text." << endl;
}

int main() {
    string T = "Hello My Name is Tejasva. I am pursuing Bachelors of Technology in Computer Science from University School of Information, Communication and Technology.";
    string P = "pursuing Bachelors";
    StringMatch(T, P, T.size(), P.size());

    return 0;
}
