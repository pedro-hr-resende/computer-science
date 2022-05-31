/* Authors: Pedro Ribeiro, Gabriela Damazo & Isabelli Tedeschi
 * Description: Quick Sort algorithm
 * Date: 28/05/2022 - Hour: 11:41
 */

#include <stdlib.h>
#include <time.h>
#include "sortingAlgorithms.h"

void changePosition(int *v, int i, int j) {

    int aux;

    aux = v[i];
    v[i] = v[j];
    v[j] = aux;

}

int findPartition(int *v, int left, int right) {

    int i, position;

    position = left;

    for(i = left + 1; i <= right; i++) {

        if(v[i] < v[left]) {
            position += 1;
            changePosition(v, position, i);
        }

    }

    changePosition(v, left, position);

    return position;

}

void normalQuickSort(int *v, int left, int right) {

    int position;

    if(left >= right) {
        return;
    }

    position = findPartition(v, left, right);
    normalQuickSort(v, left, position - 1);
    normalQuickSort(v, position + 1, right);

}

/* The rand() function generates a pseudo-random number between 0 and the constant RAND_MAX
 * The value of the constant RAND_MAX is 32762
 */

int randomPivot(int left, int right) {

    double number;

    number = (double) rand() / RAND_MAX;

    return (int)(left + number * (right - left));

}

void randomQuickSort(int *v, int left, int right) {

    int position, pivot;

    if(right <= left) {
        return;
    }

    pivot = randomPivot(left, right);

    changePosition(v, pivot, left);

    position = findPartition(v, left, right);
    randomQuickSort(v, left, position - 1);
    randomQuickSort(v, position + 1, right);

}

void modifiedQuickSort(int *v, int n, int left, int right) {

    int position, pivot, limit;

    // limit is 1% of vector length
    limit = (int) (0.01 * n);

    if(right <= left) {
        return;
    }

    pivot = randomPivot(left, right);

    changePosition(v, pivot, left);

    position = findPartition(v, left, right);

    if(((position - 1) - left) >= limit) {
        modifiedQuickSort(v, n, left, position - 1);
    } else {
        modifiedInsertionSort(v, left, position - 1);
    }

    if((right - (position + 1)) >= limit) {
        modifiedQuickSort(v, n, position + 1, right);
    } else {
        modifiedInsertionSort(v, position + 1, right);
    }

}

/* Obs: This code is based on the algorithms of teacher
 * Maria Adriana Vidigal de Lima (FACOM-UFU).
 */
