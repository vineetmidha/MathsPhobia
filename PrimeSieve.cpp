// Sieve of Eratosthenes

// Display prime numbers upto N

#include <iostream>

using namespace std;

void prime_sieve (int n){
    int sieve[n+1];
    
    for (int i=2; i<=n; i++){
        sieve[i] = 1;
    }
    
    for (int i=2; i<=n; i++){
        if (sieve[i] == 1){
            for (int j=i*i; j<=n; j+=i){
                sieve[j] = 0;
            }
        }
    }
    
    for (int i=2; i<=n; i++){
        if (sieve[i] == 1){
            cout << i << " ";
        }
    }
}

int main()
{
    int n = 10000;
    
    prime_sieve(n);

    return 0;
}
