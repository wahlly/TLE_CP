/*
The student council has a shared document file. Every day, some members of the student council write the sequence TMT (short for Towa Maji Tenshi) in it.

However, one day, the members somehow entered the sequence into the document at the same time, creating a jumbled mess. Therefore, it is Suguru Doujima's task to figure out whether the document has malfunctioned. Specifically, he is given a string of length n
 whose characters are all either T or M, and he wants to figure out if it is possible to partition it into some number of disjoint subsequences, all of which are equal to TMT. That is, each character of the string should belong to exactly one of the subsequences.

A string a
 is a subsequence of a string b
 if a
 can be obtained from b
 by deletion of several (possibly, zero) characters.

Input
The first line contains an integer t
 (1≤t≤5000
)  — the number of test cases.

The first line of each test case contains an integer n
 (3≤n<105
), the number of characters in the string entered in the document. It is guaranteed that n
 is divisible by 3
.

The second line of each test case contains a string of length n
 consisting of only the characters T and M.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, print a single line containing YES if the described partition exists, and a single line containing NO otherwise.

Example
inputCopy
5
3
TMT
3
MTT
6
TMTMTT
6
TMTTTT
6
TTMMTT
outputCopy
YES
NO
YES
NO
YES
Note
In the first test case, the string itself is already a sequence equal to TMT.

In the third test case, we may partition the string into the subsequences TMTMTT. Both the bolded and the non-bolded subsequences are equal to TMT.
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;  //number of strings
    cin >> n;
    string s;   //strings
    cin >> s;

    vector<int> T, M;

    for(int i=0; i<n; i++) {
        if(s[i] == 'T'){
            T.push_back(i);
        } else{
            M.push_back(i);
        }
    }

    bool ans = true;

    if(T.size() != M.size() * 2){
        ans = false;
    } else{
        int size_of_M = M.size();
        for(int i=0; i<size_of_M; i++){
            if(!(T[i] < M[i] && M[i] < T[i + size_of_M])){
                ans = false;
            }
        }
    }

    if(ans){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
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