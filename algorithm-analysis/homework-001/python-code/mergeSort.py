# Authors: Pedro Ribeiro & Paulo Silva
# Description: Merge sort algorithm
# Date: 28/05/2022 - Hour: 11:14

import insertionSort as insertion

def mergeData(v, aux, left, middle, right):

    for k in range(left, right + 1):
        aux[k] = v[k]

    i = left
    j = middle + 1

    for k in range(left, right + 1):

        if i > middle:
            v[k] = aux[j]
            j += 1
        elif j > right:
            v[k] = aux[i]
            i += 1
        elif aux[j] < aux[i]:
            v[k] = aux[j]
            j += 1
        else:
            v[k] = aux[i]
            i += 1

def mergeSort(v, aux, left, right):

    if right <= left:
        return

    middle = (left + right) // 2

    mergeSort(v, aux, left, middle)
    mergeSort(v, aux, middle + 1, right)
    mergeData(v, aux, left, middle, right)

def modifiedMergeSort(v, aux, left, right):

    n = len(v)
    limit = (int) (0.01 * n)

    if(left < right):

        middle = (left + right) // 2

        if (middle - left) >= limit:
            modifiedMergeSort(v, aux, left, middle)
        else:
            insertion.modifiedInsertionSort(v, left, middle)

        if right - (middle + 1) >= limit:
            modifiedMergeSort(v, aux, middle + 1, right)
        else:
            insertion.modifiedInsertionSort(v, middle + 1, right)

        mergeData(v, aux, left, middle, right)

# Obs: This code is based on the algorithms of teacher
# Maria Adriana Vidigal de Lima (FACOM-UFU).