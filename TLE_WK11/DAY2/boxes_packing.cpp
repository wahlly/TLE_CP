/**
Mishka has got n empty boxes. For every i (1 ≤ i ≤ n), i-th box is a cube with side length ai.

Mishka can put a box i into another box j if the following conditions are met:

i-th box is not put into another box;
j-th box doesn't contain any other boxes;
box i is smaller than box j (ai < aj).
Mishka can put boxes into each other an arbitrary number of times. He wants to minimize the number of visible boxes. A box is called visible iff it is not put into some another box.

Help Mishka to determine the minimum possible number of visible boxes!

Input
The first line contains one integer n (1 ≤ n ≤ 5000) — the number of boxes Mishka has got.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 109), where ai is the side length of i-th box.

Output
Print the minimum possible number of visible boxes.

Examples
inputCopy
3
1 2 3
outputCopy
1
inputCopy
4
4 2 4 3
outputCopy
2
Note
In the first example it is possible to put box 1 into box 2, and 2 into 3.

In the second example Mishka can put box 2 into box 3, and box 4 into box 1.
* */


#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

//first approach
//int main (){
//    int n;
//    cin >> n;
//
//    vector<int> a(n);
//    for(int i=0; i<n; i++) cin >> a[i];
//
//    map<int, int> s;
//    for(int i=0; i<n; i++){
//        s[a[i]]++;
//    }
//
//    int ans = 0;
//    for(auto elem : s){
//        int freq = elem.second;
//        ans = max(ans, freq);
//    }
//
//    cout << ans << endl;
//    return 0;
//}


//second approach
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    multiset<int> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }

    int ans = 0;
    while(!st.empty()){
        ans++;

        int val = *st.begin();
        st.erase(st.begin());
        while(st.upper_bound(val) != st.end()){
            int newVal = *st.upper_bound(val);
            st.erase(st.find(newVal));
            val = newVal;
        }
    }

    cout << ans << endl;
    return 0;
}