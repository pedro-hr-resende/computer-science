/* Authors: Pedro Ribeiro, Gabriela Damazo & Isabelli Tedeschi
 * Description: User interface
 * Date: 28/05/2022 - Hour: 11:41
 */

#include <stdio.h>
#include <stdlib.h>
#include "sortingAlgorithms.h"
#include "algorithmTests.h"
#include "generateData.h"

void printVector(int *v, int n);

int* copyVector(int *v, int n);

int main(void) {

    int *v, *aux;
    
    int n[19] = {100000, 150000, 200000, 250000, 300000, 350000, 400000, 450000, 500000,
                 550000, 600000, 650000, 700000, 750000, 800000, 850000, 900000, 950000, 1000000};

    double timeSpent;

    for(int i = 0; i < 19; i++) {

        printf("\nTest: %d elements\n", n[i]);

        v = generateDataVector(n[i], n[i]);

        aux = copyVector(v, n[i]);
        timeSpent = insertionSortTest(aux, n[i]);
        printf("\nThe time spent with insertion sort was: %.15f\n", timeSpent);

        aux = copyVector(v, n[i]);
        timeSpent = mergeSortTest(aux, 0, n[i] - 1);
        printf("\nThe time spent with merge sort was: %.15f\n", timeSpent);

        aux = copyVector(v, n[i]);
        timeSpent = randomQuickSortTest(aux, 0, n[i] - 1);
        printf("\nThe time spent with quick sort was: %.15f\n", timeSpent);

        aux = copyVector(v, n[i]);
        timeSpent = modifiedMergeSortTest(aux, n[i], 0, n[i] - 1);
        printf("\nThe time spent with merge sort using insertion sort was: %.15f\n", timeSpent);

        aux = copyVector(v, n[i]);
        timeSpent = modifiedQuickSortTest(aux, n[i], 0, n[i] - 1);
        printf("\nThe time spent with quick sort using insertion sort was: %.15f\n", timeSpent);

    }

    free(v);

    return 0;

}

void printVector(int *v, int n) {

    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

}

int* copyVector(int *v, int n) {

    int *aux = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        aux[i] = v[i];
    }

    return aux;

}
