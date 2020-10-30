// https://www.hackerrank.com/challenges/best-divisor/problem


#include <bits/stdc++.h>

using namespace std;

int digitsum(int n){
    int s = 0;
    while (n){
        s += n%10;
        n/=10;
    }
    return s;
}

int solve(int n){
    int s1 = digitsum(n);
    int s2 = 0;
    int maxSum = 0;
    int divisor = 0;

    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            if (i < 10)
                s2 = i;
            else
                s2 = digitsum(i);

            if (s2 > maxSum){
                maxSum = s2;
                divisor = i;
            }
        }
    }

    int ans = 0;

    if (s1 > maxSum)
        ans = n;
    else if (s1 < maxSum)
        ans = divisor;
    else
        ans = min(n, divisor);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << solve(n);

    return 0;
}
