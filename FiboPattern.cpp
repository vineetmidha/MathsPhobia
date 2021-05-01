
// https://www.codingninjas.com/codestudio/problems/price-pattern_1530594

int findPrice(int a, int b, int n) {
	  const long long mod = 1e9+7;  // Gives TLE on removing const 
    
    vector<long long> dp(n + 1, -1);
    
    dp[1] = a;
    dp[2] = b;
    
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + (dp[i - 1] * dp[i - 2]) % mod) % mod;
    }
    
    return dp[n];
}
