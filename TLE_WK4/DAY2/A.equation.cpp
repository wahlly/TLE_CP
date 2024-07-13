/*
Let's call a positive integer composite if it has at least one divisor other than 1
 and itself. For example:

the following numbers are composite: 1024
, 4
, 6
, 9
;
the following numbers are not composite: 13
, 1
, 2
, 3
, 37
.
You are given a positive integer n
. Find two composite integers a,b
 such that a−b=n
.

It can be proven that solution always exists.

Input
The input contains one integer n
 (1≤n≤107
): the given integer.

Output
Print two composite integers a,b
 (2≤a,b≤109,a−b=n
).

It can be proven, that solution always exists.

If there are several possible solutions, you can print any.

Examples
inputCopy
1
outputCopy
9 8
inputCopy
512
outputCopy
4608 4096
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << 9*n << " " << 8*n << endl;

    return 0;
}