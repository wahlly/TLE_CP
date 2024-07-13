/*
 Given a number N
 and two arrays A
, B
 of N
 numbers. Determine if B
 is a permutation of A
 or not.

Note: A permutation is an arrangement of all or part of a set of objects.

For example: The array [2, 1, 3], [3, 2, 1] and [2, 3, 1] are permutation of the array [1, 2, 3].

Input
First line contains a number N
 (1≤N≤103)
 Number of elements.

Second line contains N
 numbers (1≤Ai≤107)
 elements of array A
.

Third line contains N
 numbers (1≤Bi≤107)
 elements of array B
.

Output
Print "yes" if array B
 is a permutation of A
 otherwise, print "no" without quotations.

Examples
inputCopy
4
4 2 3 7
2 3 4 9
outputCopy
no
inputCopy
5
5 1 1 9 3
1 9 1 5 3
outputCopy
yes
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];
    for(int i=0; i<n; i++) {
        int entry;
        cin >> entry;
        a[i] = entry;
    }

    for(int i=0; i<n; i++) {
        int entry;
        cin >> entry;
        b[i] = entry;
    }

    sort(a, a+n);
    sort(b, b+n);
    string res = "yes";

    for(int i=0; i<n; i++) {
        if(a[i] != b[i]) {
            res = "no";
            break;
        }
    }


    cout << res << endl;
    return 0;
}