#include <iostream>
using namespace std;

int getMax(const int a[], int n) {
    int mx = a[0];
    for (int i = 1; i < n; ++i)
        if (a[i] > mx) mx = a[i];
    return mx;
}

int getMin(const int a[], int n) {
    int mn = a[0];
    for (int i = 1; i < n; ++i)
        if (a[i] < mn) mn = a[i];
    return mn;
}

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i * i <= x; i += 6)
        if (x % i == 0 || x % (i + 2) == 0) return false;
    return true;
}

bool isPalindrome(int x) {
    int orig = x, rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return orig == rev;
}

int divisorCount(int x) {
    int c = 0;
    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            c++;
            if (i != x / i) c++;
        }
    }
    return c;
}

int numberWithMaxDivisors(const int a[], int n) {
    int bestNum = a[0];
    int bestDivs = divisorCount(a[0]);
    for (int i = 1; i < n; ++i) {
        int d = divisorCount(a[i]);
        if (d > bestDivs || (d == bestDivs && a[i] > bestNum)) {
            bestDivs = d;
            bestNum = a[i];
        }
    }
    return bestNum;
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int mx = getMax(a, n);
    int mn = getMin(a, n);

    int primeCnt = 0;
    for (int i = 0; i < n; ++i)
        if (isPrime(a[i])) primeCnt++;

    int palCnt = 0;
    for (int i = 0; i < n; ++i)
        if (isPalindrome(a[i])) palCnt++;

    int divNum = numberWithMaxDivisors(a, n);

    cout << "The maximum number : " << mx << "\n";
    cout << "The minimum number : " << mn << "\n";
    cout << "The number of prime numbers : " << primeCnt << "\n";
    cout << "The number of palindrome numbers : " << palCnt << "\n";
    cout << "The number that has the maximum number of divisors : " << divNum << "\n";

    return 0;
}
