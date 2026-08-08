class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1 = n * (n*2 + 1);
        int sumOdd = 1 + ( (n-1) * (n+1));
        return __gcd(sumOdd, sum1 - sumOdd);
    }
};
