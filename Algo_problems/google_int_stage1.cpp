//
// Created by user on 8/8/24.
//

/*
 *You are given a positive integer N, which has at least three digits in its decimal representation.
 * You must pick three digits from the decimal representation of N and arrange them in any order you want, creating another integer.
 * Your task is to create the largest possible integer.

For example, given N = 30919, you can create the

number 193 (by picking [3] 0 [9] [1] 9) or 993 (by picking [3] 0 (9] 1 [91) and many more,
 but you cannot create 999 (there are only two digits '9') or 219 (there is no '2). In the example above, the answer is 993.

Write a function:

class Solution { public int solution(int N); }

that, given an integer N, returns the largest integer that can be created in the way described above.

Examples:

﻿﻿﻿Given N = 30919, your function should return 993.
﻿﻿﻿Given N = 328, your function should return 832.
﻿﻿﻿Given N = 2004000, your function should return
420.

Assume that:

  N is an integer within the range [100..100,000,000].
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    string numberStr = to_string(N);

    //get the frequency of each number, from 0 - 9
    vector<int> digitCount(10, 0);
    for(char digit: numberStr) {
        digitCount[digit  - '0']++;
    }

    //spread the numbers in a vector from highest to lowest
    vector<int>spreadDigits;
    for(int i=9; i>=0; --i) {
        for(int j=0; j<digitCount[i]; j++) {
            spreadDigits.push_back(i);
        }
    }

    //iterate through the first three of the vector and return as the largest possible number
    int largestNumber = 0;
    for(int i=0; i<3 && i< spreadDigits.size(); i++) {
        largestNumber = largestNumber*10 + spreadDigits[i];
    }
    cout << largestNumber;

    return 0;
}