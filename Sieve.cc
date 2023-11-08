// learning and understanding the Sieve of Eratosthenes algorithm to generate a
// list of prime numbers up to a given limit.
#include <iostream>
#include <vector>
#include <array>

// This integerSquareRoot function uses a binary search to find the largest 
// integer mid such that mid * mid is less than or equal to n. The result is 
// the integer part of the square root of n.
int integerSquareRoot(int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0 || n == 1) {
        return n;
    }

    int start = 1, end = n, res;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid <= n / mid) {
            start = mid + 1;
            res = mid;
        } else {
            end = mid -1;
        }
    }
    return res;
}

std::vector<int> primesUpTo(int n) {
    if (n <= 2) {
        return {};
    }
    std::vector<int> vec(n, 1);
    std::vector<int> res;
    vec[0] = 0;
    vec[1] = 0;

    for(int i = 2; i < integerSquareRoot(n); i++) {
        if (vec[i] == 1) {
            for(int j = i*i; j < n; j+=i) {
                vec[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] == 1) {
            res.push_back(i);
            // std::cout << i << std::endl;
        }
    }
    return res;
}

