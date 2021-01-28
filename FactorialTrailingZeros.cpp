// https://leetcode.com/problems/factorial-trailing-zeroes/

int trailingZeroes(int n) {
    int res = 0;
    for (int i=5; i<=n; i*=5){
        res += n/i;
    }
    return res;
}

