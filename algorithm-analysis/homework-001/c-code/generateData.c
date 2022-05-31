/* Authors: Pedro Ribeiro, Gabriela Damazo & Isabelli Tedeschi
 * Description: Generate vector of size n with random data
 * Date: 28/05/2022 - Hour: 11:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* generateDataVector(int n, int range) {

    int *v = (int*) malloc(n * sizeof(int));

    int i = 0;

    srand(time(NULL));

    while(i < n) {
        v[i] = rand() % range;
        i++;
    }

    return v;

}
