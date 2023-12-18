/*
 * Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N number of values.

Second line contains N numbers

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
inputCopy
5
-5 0 -3 -4 12
outputCopy
Even: 3
Odd: 2
Positive: 1
Negative: 3
Note
First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4
 * */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    int counter = 0;
    while(counter < n) {
        int value;
        cin >> value;

        if(value % 2 == 0) {
            even++;
        } else{
            odd++;
        }

        if(value < 0) {
            negative++;
        } else if(value > 0){
            positive++;
        }

        counter ++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}