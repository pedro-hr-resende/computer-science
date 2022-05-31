# Authors: Pedro Ribeiro & Paulo Silva
# Description: Algorithm performance tests
# Date: 28/05/2022 - Hour: 11:14

import insertionSort as insertion
import mergeSort as merge
import quickSort as quick
import time

def insertionSortTest(v):

    startTest = time.time()
    insertion.insertionSort(v)
    endTest = time.time()
    spendTime = endTest - startTest

    return spendTime

def modifiedInsertionSortTest(v):

    n = len(v)

    startTest = time.time()
    insertion.modifiedInsertionSort(v, 0, n - 1)
    endTest = time.time()
    spendTime = endTest - startTest

    return spendTime

def mergeSortTest(v):

    n = len(v)
    aux = [0] * len(v)

    startTest = time.time()
    merge.mergeSort(v, aux, 0, n - 1)
    endTest = time.time()
    spendTime = endTest - startTest

    return spendTime

def modifiedMergeSortTest(v):

    n = len(v)
    aux = [0] * len(v)

    startTest = time.time()
    merge.modifiedMergeSort(v, aux, 0, n - 1)
    endTest = time.time()
    spendTime = endTest - startTest

    return spendTime

def quickSortTest(v):

    n = len(v)

    startTest = time.time()
    quick.randomQuickSort(v, 0, n - 1)
    endTest = time.time()
    spendTime = endTest - startTest

    return spendTime

def modifiedQuickSortTest(v):

    n = len(v)

    startTest = time.time()
    quick.modifiedQuickSort(v, 0, n - 1)
    endTest = time.time()
    spendTime = endTest - startTest

    return spendTime