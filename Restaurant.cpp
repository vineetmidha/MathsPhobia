// https://www.hackerrank.com/challenges/restaurant/problem

int restaurant(int l, int b) {

    if (l==b) return 1;
    
    int gcd = __gcd(l,b);
    
    return (l*b) / (gcd*gcd);
}
