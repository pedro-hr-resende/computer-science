/* Authors: Pedro Ribeiro, Gabriela Damazo & Isabelli Tedeschi
 * Description: Algorithm time tests
 * Date: 28/05/2022 - Hour: 11:41
 */

#include <stdlib.h>
#include <time.h>
#include "sortingAlgorithms.h"

double insertionSortTest(int *v, int n) {

    clock_t startTest, endTest;

    double timeSpent;

    startTest = clock();
    insertionSort(v, n);
    endTest = clock();

    timeSpent = ((double) endTest - startTest) / CLOCKS_PER_SEC;

    return timeSpent;

}

double modifiedInsertionSortTest(int *v, int left, int right) {

    clock_t startTest, endTest;

    double timeSpent;

    startTest = clock();
    modifiedInsertionSort(v, left, right);
    endTest = clock();

    timeSpent = ((double) endTest - startTest) / CLOCKS_PER_SEC;

    return timeSpent;

}

double mergeSortTest(int *v, int left, int right) {

    clock_t startTest, endTest;

    double timeSpent;

    startTest = clock();
    mergeSort(v, left, right);
    endTest = clock();

    timeSpent = ((double) endTest - startTest) / CLOCKS_PER_SEC;

    return timeSpent;

}

double modifiedMergeSortTest(int *v, int n, int left, int right) {

    clock_t startTest, endTest;

    double timeSpent;

    startTest = clock();
    modifiedMergeSort(v, n, left, right);
    endTest = clock();

    timeSpent = ((double) endTest - startTest) / CLOCKS_PER_SEC;

    return timeSpent;

}

double randomQuickSortTest(int *v, int left, int right) {

    clock_t startTest, endTest;

    double timeSpent;

    startTest = clock();
    randomQuickSort(v, left, right);
    endTest = clock();

    timeSpent = ((double) endTest - startTest) / CLOCKS_PER_SEC;

    return timeSpent;

}

double modifiedQuickSortTest(int *v, int n, int left, int right) {

    clock_t startTest, endTest;

    double timeSpent;

    startTest = clock();
    modifiedQuickSort(v, n, left, right);
    endTest = clock();

    timeSpent = ((double) endTest - startTest) / CLOCKS_PER_SEC;

    return timeSpent;

}
