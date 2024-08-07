/*
In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all citizens in Berland by the expense of the state treasury.

Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer in ai burles (burle is the currency in Berland).

You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. The king can only give money, he hasn't a power to take away them.

Input
The first line contains the integer n (1 ≤ n ≤ 100) — the number of citizens in the kingdom.

The second line contains n integers a1, a2, ..., an, where ai (0 ≤ ai ≤ 106) — the welfare of the i-th citizen.

Output
In the only line print the integer S — the minimum number of burles which are had to spend.

Examples
inputCopy
5
0 1 2 3 4
outputCopy
10
inputCopy
5
1 1 0 1 1
outputCopy
1
inputCopy
3
1 3 1
outputCopy
4
inputCopy
1
12
outputCopy
0
Note
In the first example if we add to the first citizen 4 burles, to the second 3, to the third 2 and to the fourth 1, then the welfare of all citizens will equal 4.

In the second example it is enough to give one burle to the third citizen.

In the third example it is necessary to give two burles to the first and the third citizens to make the welfare of citizens equal 3.

In the fourth example it is possible to give nothing to everyone because all citizens have 12 burles.
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int welfare[n];
    for(int i=0; i<n; i++){
        cin >> welfare[i];
    }

    int max = welfare[0];
    for(int i=1; i<n; i++){
        if(welfare[i] > max)
            max = welfare[i];
    }

    int total_gift = 0;
    for(int i=0; i<n; i++) {
        int amount_to_gift = max - welfare[i];
        if(amount_to_gift > 0) {
            total_gift += amount_to_gift;
        }
    }

    cout << total_gift << endl;

    return 0;
}