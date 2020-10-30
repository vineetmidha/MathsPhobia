
// https://www.hackerrank.com/challenges/sherlock-and-divisors/problem

// Editorial

/*
Problem
Print the number of factors of N which are divisible by 2.

Solution
Let's say N = a.b where a, b are integers.

There is no solution to above equation where a > sqrt(N) and b > sqrt(N). 
So we can traverse from i = 1 to sqrt(N) supposing that i is a factor of N. 
If i is a factor so will be N/i. 
We will cover all factors this way.
Note that if N is a perfect square, i = sqrt(N) should be counted only once, not twice.

*/

int divisors(int n) {
    int ans=0;
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i==0)
        {
            if(i%2==0)ans++;
            if((n/i)%2==0)ans++;
        }
    }
    if(i*i==n && i%2==0)ans++;
    return ans;
}

