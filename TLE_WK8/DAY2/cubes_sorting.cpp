/*
Wheatley decided to try to make a test chamber. He made a nice test chamber, but there was only one detail absent — cubes.

For completing the chamber Wheatley needs n
 cubes. i
-th cube has a volume ai
.

Wheatley has to place cubes in such a way that they would be sorted in a non-decreasing order by their volume. Formally, for each i>1
, ai−1≤ai
 must hold.

To achieve his goal, Wheatley can exchange two neighbouring cubes. It means that for any i>1
 you can exchange cubes on positions i−1
 and i
.

But there is a problem: Wheatley is very impatient. If Wheatley needs more than n⋅(n−1)2−1
 exchange operations, he won't do this boring work.

Wheatly wants to know: can cubes be sorted under this conditions?

Input
Each test contains multiple test cases.

The first line contains one positive integer t
 (1≤t≤1000
), denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer n
 (2≤n≤5⋅104
) — number of cubes.

The second line contains n
 positive integers ai
 (1≤ai≤109
) — volumes of cubes.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, print a word in a single line: "YES" (without quotation marks) if the cubes can be sorted and "NO" (without quotation marks) otherwise.

Example
inputCopy
3
5
5 3 2 1 4
6
2 2 2 2 2 2
2
2 1
outputCopy
YES
YES
NO
Note
In the first test case it is possible to sort all the cubes in 7
 exchanges.

In the second test case the cubes are already sorted.

In the third test case we can make 0
 exchanges, but the cubes are not sorted yet, so the answer is "NO".
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> cubes;

        for(int i=0; i<n; i++){
            int num;
            cin >> num;
            cubes.push_back(num);
        }

        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(cubes[i] <= cubes[i+1]) {
                flag = false;
            }
        }

        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}