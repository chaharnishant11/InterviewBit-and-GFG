#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int bananas = 3000,
        distance = 1000,
        bpm = 1,
        carry = 1000;

int x[1000];

/*
 *
 */
int main(int argc, char** argv) {

    x[0] = bananas;

    for (int i = 0; i < 999; i++){
        int times = ceil((x[i] + 0.0) / carry);
        x[i + 1] = x[i] - (times * 2 - 1);
    }

    cout << x[999];

    return 0;
}
