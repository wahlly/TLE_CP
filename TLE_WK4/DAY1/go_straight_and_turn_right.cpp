/*
Consider an
xy-plane. The positive direction of the
x-axis is in the direction of east, and the positive direction of the
y-axis is in the direction of north.
Takahashi is initially at point
(x,y)=(0,0) and facing east (in the positive direction of the
x-axis).

You are given a string
T=t
1
​
 t
2
​
 …t
N
​
  of length
N consisting of S and R. Takahashi will do the following move for each
i=1,2,…,N in this order.

If
t
i
​
 = S, Takahashi advances in the current direction by distance
1.
If
t
i
​
 = R, Takahashi turns
90 degrees clockwise without changing his position. As a result, Takahashi's direction changes as follows.
If he is facing east (in the positive direction of the
x-axis) before he turns, he will face south (in the negative direction of the
y-axis) after he turns.
If he is facing south (in the negative direction of the
y-axis) before he turns, he will face west (in the negative direction of the
x-axis) after he turns.
If he is facing west (in the negative direction of the
x-axis) before he turns, he will face north (in the positive direction of the
y-axis) after he turns.
If he is facing north (in the positive direction of the
y-axis) before he turns, he will face east (in the positive direction of the
x-axis) after he turns.
Print the coordinates Takahashi is at after all the steps above have been done.

Constraints
1≤N≤10
5

N is an integer.
T is a string of length
N consisting of S and R.
Input
Input is given from Standard Input in the following format:

N
T
Output
Print the coordinates
(x,y) Takahashi is at after all the steps described in the Problem Statement have been completed, in the following format, with a space in between:

x
y
Sample Input 1
Copy
4
SSRS
Sample Output 1
Copy
2 -1
Takahashi is initially at
(0,0) facing east. Then, he moves as follows.

t
1
​
 = S, so he advances in the direction of east by distance
1, arriving at
(1,0).
t
2
​
 = S, so he advances in the direction of east by distance
1, arriving at
(2,0).
t
3
​
 = R, so he turns
90 degrees clockwise, resulting in facing south.
t
4
​
 = S, so he advances in the direction of south by distance
1, arriving at
(2,−1).
Thus, Takahashi's final position,
(x,y)=(2,−1), should be printed.

Sample Input 2
Copy
20
SRSRSSRSSSRSRRRRRSRR
Sample Output 2
Copy
0 1
 */


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y=0;
    char curr_pos = 'x';
    char curr_dir = '+';
    for(int i=0; i<n; i++){
        if(s[i] == 'S') {
            if(curr_pos == 'x') {
                if(curr_dir == '+')
                    x++;
                else
                    x--;
            } else{
                if(curr_dir == '+')
                    y++;
                else
                    y--;
            }
        } else{
            if(curr_pos == 'x'){
//                y = 0;
                if(curr_dir == '+') {
                    curr_pos = 'y';
                    curr_dir = '-';
                }else{
                    curr_pos = 'y';
                    curr_dir = '+';
                }
            } else{
//                x = 0;
                if(curr_dir == '+') {
                    curr_pos = 'x';
                    curr_dir = '+';
                } else{
                    curr_pos = 'x';
                    curr_dir = '-';
                }
            }
        }
    }
    cout << x << " " << y << endl;

    return 0;
}