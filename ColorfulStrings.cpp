// https://www.codingninjas.com/codestudio/problems/colorful-strings_1530588

/*
https://www.geeksforgeeks.org/number-distinct-permutation-string-can/

Find the count without finding all permutation. 
Idea is to find all the characters that are getting repeated, 
i.e., frequency of all the character. 
Then, divide the factorial of the length of string by multiplication of factorial of frequency of characters.

factorial (len(string)) / (factorial(char_1) * factorial(char_2) * factorial(char_3))

n r g b
3 1 1 1

3! / (1!*1!*1!) = 6
*/

long long possibleStrings(int n, int r, int b, int g) {

    //  To store the factorial.
    vector<long long> fact(n + 1);

    fact[0] = 1;
    for (long long i = 1; i <= n; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    //  To store the count of possible strings.
    long long ans = 0;

    for (int i = r; i <= n; i++)
    {
        for (int j = b; j <= n; j++)
        {
            //  k denotes the required count of 'G's in the string.
            int k = n - i - j;  
            if (k >= g)
            {
                ans = ans + (fact[n]) / (fact[i] * fact[j] * fact[k]);
            }
        }
    }

    return ans;
}
