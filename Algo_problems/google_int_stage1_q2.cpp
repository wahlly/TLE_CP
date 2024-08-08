//
// Created by user on 8/8/24.
//


/*
 *Two words rhyme if their three-letter suffixes are identical. For example "football" and "basketball" rhyme but "cat" and "pet" do not rhyme.
 * If at least one of the words is shorter than three letters then words do not rhyme.

You are given a string S consisting of two words separated by a dash'.

'. Do they rhyme?

Write a function solution that given a string S of N characters, returns true if the vords rhyme and false otherwise.

Examples:

1. Given S = "news-views", the function should

return true. The three-letter suffixes of both words are identical.

2. Given S = "at-cat", the function should return false.

The first word is shorter than three letters.

3. Given S = "football-allal", the function should

return false. Suffixes "all" and "lal" are different.

4. Given S = "-pet", the function should return false.

The first word is empty.

Assume that:

* N is an integer within the range [1..100];

* string S consists of lowercase letters (a-z) and exactly one dash ‘-‘.
*/

#include <iostream>
#include <string>

using namespace std;

int getDelimIndex(string S, char delim) {
    int index = 0;

    while(index < S.size()) {
        if(S[index] == delim) {
            return index;
        }
        index++;
    }

    return -1;
}

int main() {
    string S;
    cin >> S;
    bool res = false;

    int N = S.size();
    if(N < 7) {
        cout << res << endl;
        return 0;
    }

    int separatorIndex = getDelimIndex(S, '-');
    int left = separatorIndex - 1;
    int right = N - 1;
    if(left < 3 || (N-1) - separatorIndex < 3) {
        cout << res << endl;
        return 0;
    }

    int count = 0;
    while(count < 3) {
        count++;

        if(S[left] != S[right]){
            break;
        }

        if(count == 3) {
            res = true;
        }

        left--;
        right--;
    }

    cout << res << endl;

    return 0;
}