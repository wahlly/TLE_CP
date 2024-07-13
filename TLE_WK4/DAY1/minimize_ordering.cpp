/*
 You are given a string
S. Find the lexicographically smallest string
S
′
  obtained by permuting the characters of
S.

Here, for different two strings
s=s
1
​
 s
2
​
 …s
n
​
  and
t=t
1
​
 t
2
​
 …t
m
​
 ,
s<t holds lexicographically when one of the conditions below is satisfied.

There is an integer
i (1≤i≤min(n,m)) such that
s
i
​
 <t
i
​
  and
s
j
​
 =t
j
​
  for all integers
j (1≤j<i).
s
i
​
 =t
i
​
  for all integers
i (1≤i≤min(n,m)), and
n<m.
Constraints
S is a string of length between
1 and
2×10
5
  (inclusive) consisting of lowercase English letters.
Input
Input is given from Standard Input in the following format:

S
Output
Print the lexicographically smallest string
S
′
  obtained by permuting the characters in
S.

Sample Input 1
Copy
aba
Sample Output 1
Copy
aab
Three strings can be obtained by permuting aba:

aba
aab
baa
The lexicographically smallest among them is aab.

Sample Input 2
Copy
zzzz
Sample Output 2
Copy
zzzz
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;

    int arr[26];
    memset(arr, 0, sizeof(arr));
    int n = s.size();
    for(int i=0; i<n; i++) {
        arr[s[i] - 'a']++;
    }

    string ans = "";
    for(int i=0; i<26; i++) {
        char c = i + 'a';
        while(arr[i] > 0) {
            ans += c;
            arr[i]--;
        }
    }

    cout << ans << endl;

    return 0;
}