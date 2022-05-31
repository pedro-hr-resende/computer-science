/* Authors: Pedro Ribeiro, Gabriela Damazo & Isabelli Tedeschi
 * Description: Merge Sort algorithm
 * Date: 28/05/2022 - Hour: 11:41
 */

#include <stdlib.h>
#include "sortingAlgorithms.h"

/* "right" receives the last position of the vector
 * Example: v[10] -> right = 9 and left = 0
 */

void mergeData(int *v, int left, int middle, int right) {

    int *aux;
    int i, j, k;

    aux = (int *) malloc (((right + 1) - left) * sizeof(int));

    i = left;
    j = middle + 1;
    k = 0;

    while((i <= middle) && (j <= right)) {

        if(v[i] <= v[j]) {
            aux[k] = v[i];
            i++;
        } else {
            aux[k] = v[j];
            j++;
        }

        k++;

    }

    while(i <= middle) {
        aux[k] = v[i];
        i++;
        k++;
    }

    while(j <= right) {
        aux[k] = v[j];
        j++;
        k++;
    }

    j = 0;

    for(i = left; i <= right; i++) {
        v[i] = aux[j];
        j++;
    }

    free(aux);

}

void mergeSort(int *v, int left, int right) {

    int middle;

    if(left < right) {

        middle = (left + right) / 2;
        mergeSort(v, left, middle);
        mergeSort(v, middle + 1, right);
        mergeData(v, left, middle, right);

    }

}

void modifiedMergeSort(int *v, int n, int left, int right) {

    int middle, limit;

    // limit is 1% of vector length
    limit = (int) (0.01 * n);

    if(left < right) {

        middle = (left + right) / 2;

        if((middle - left) >= limit) {
            modifiedMergeSort(v, n, left, middle);
        } else {
            modifiedInsertionSort(v, left, middle);
        }

        if((right - (middle + 1)) >= limit) {
            modifiedMergeSort(v, n, middle + 1, right);
        } else {
            modifiedInsertionSort(v, middle + 1, right);
        }

        mergeData(v, left, middle, right);

    }

}

/* Obs: This code is based on the algorithms of teacher
 * Maria Adriana Vidigal de Lima (FACOM-UFU).
 */
