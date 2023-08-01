#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5+10;
int N,test;
string S,A;

int main()
{
    cin >> test;
    A = "hackerrank";
    while (test--)
    {
        cin >> S; N = S.size();
        int j = 0;
        for (int i=0; i < N && j < A.size(); i++)
            if (S[i] == A[j]) j++;
        puts(j == A.size() ? "YES" : "NO");
    }
}
