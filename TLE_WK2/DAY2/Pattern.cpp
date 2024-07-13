/*
 * Given 'n', print the symbol 'Z' spanning n rows using '*' symbol. Value of n>2 and n<=20.

Example:
1) Input : n=3
Output:
***
 *
***

2) Input n=4
Output:
****
  *
 *
****
Sample Input
5
Sample Output
*****
   *
  *
 *
*****
Time Limit: 5
Memory Limit: 256
Source Limit:
Explanation
The 'Z' is printed across 5 lines as shown above.
 */


#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;

    for(int i = 0; i<num-1; i++) {
        for(int j=0; j<num; j++) {
            if(i==0) {
                cout << "*";
            }
            else if(j==num-i-1) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i=0; i<num; i++) {
        cout << "*";
    }

    return 0;
}
