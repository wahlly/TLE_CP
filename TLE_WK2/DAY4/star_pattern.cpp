/*
Geek is very fond of patterns. Once, his teacher gave him a star pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a star pattern.



Example 1:



Your Task:

You don't need to input anything. Complete the function printDiamond() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20
*/


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(j < n-i) {
                cout << " ";
            } else{
                cout << "*" << " ";
            }
        }
        cout << endl;
    }

    for(int i=n; i>0; i--) {
        for(int j=0; j<n; j++){
            if(j < n-i) {
                cout << " ";
            } else{
                cout << "*" << " ";
            }
        }
        cout << endl;
    }
}