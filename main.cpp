#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const short min_value = 1;
    const short max_value = 6;
    srand(time(nullptr));

    const short first_digit = (rand() % (max_value - min_value) + 1);
    const short seconde_digit = (rand() % (max_value - min_value) + 1);

    cout << first_digit << ", " << seconde_digit;
    return 0;
}
