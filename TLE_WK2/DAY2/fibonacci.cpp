/*
 Given a number N. Print the Fibonacci number of N.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print the Fibonacci number of N.

Examples
inputCopy
1
outputCopy
0
inputCopy
5
outputCopy
3

*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long fib_seq[n];
    fib_seq[0] = 0;
    fib_seq[1] = 1;
    for(int i = 2; i< n; i++) {
        fib_seq[i] = fib_seq[i-2] + fib_seq[i-1];
    }

    cout << fib_seq[n-1] << endl;
    return 0;
}