/*
You are given a square grid with n
 rows and n
 columns. Each cell contains either 0
 or 1
.

In an operation, you can select a cell of the grid and flip it (from 0→1
 or 1→0
). Find the minimum number of operations you need to obtain a square that remains the same when rotated 0∘
, 90∘
, 180∘
 and 270∘
.

 Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the size of the grid.

Then n
 lines follow, each with n
 characters ai,j
 (0≤ai,j≤1
) — the number written in each cell.

Output
For each test case output a single integer  — the minimum number of operations needed to make the square look the same rotated 0∘
, 90∘
, 180∘
 and 270∘
.

Example
inputCopy
5
3
010
110
010
1
0
5
11100
11011
01011
10011
11000
5
01000
10101
01010
00010
01001
5
11001
00000
11111
10110
01111
outputCopy
1
0
9
7
6
Note
In the first test case, we can perform one operations to make the grid 010111010
. Now, all rotations of the square are the same.

In the second test case, all rotations of the square are already the same, so we don't need any flips.
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string mat[n];
    for(int i=0; i<n; i++) {
        cin >> mat[i];
    }

    //finding the area we need to check
    int x = n/2, y = n/2;
    if(n%2 == 1) {
        y++;
    }

    //checking and updating the answer
    int ans = 0;
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            int ones = 0;
            ones += mat[i][j] - '0';
            ones += mat[j][n-i-1] - '0';
            ones += mat[n-i-1][n-j-1]- '0';
            ones += mat[n-j-1][i] - '0';

            if(ones == 2) {
                ans += 2;
            } else if(ones == 1 || ones == 3) {
                ans += 1;
            }
        }
    }

    cout << ans << '\n';
    return;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}