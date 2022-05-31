# Authors: Pedro Ribeiro & Paulo Silva
# Description: Quick sort algorithm
# Date: 28/05/2022 - Hour: 11:14

import random
import insertionSort as insert

def findPartition(v, left, right):

    position = left
    pivot = v[left]

    for i in range(left + 1, right + 1):

        if v[i] <= pivot:
            position += 1
            v[position], v[i] = v[i], v[position]

    v[left], v[position] = v[position], v[left]

    return position

def normalQuickSort(v, left, right):

    if left >= right:
        return

    position = findPartition(v, left, right)
    normalQuickSort(v, left, position - 1)
    normalQuickSort(v, position + 1, right)

def randomPivot(left, right):

    number = random.random()
    return (int) (left + number * (right - left))

def randomQuickSort(v, left, right):

    if right <= left:
        return

    pivot = randomPivot(left, right)

    v[pivot], v[left] = v[left], v[pivot]

    position = findPartition(v, left, right)
    randomQuickSort(v, left, position - 1)
    randomQuickSort(v, position + 1, right)

def modifiedQuickSort(v, left, right):

    n = len(v)

    # limit is 1% of vector length
    limit = (int) (0.01 * n)

    if right <= left:
        return

    pivot = randomPivot(left, right)

    v[pivot], v[left] = v[left], v[pivot]

    position = findPartition(v, left, right)

    if (position - 1) - left >= limit:
        modifiedQuickSort(v, left, position - 1)
    else:
        insert.modifiedInsertionSort(v, left, position - 1)

    if right - (position + 1) >= limit:
        modifiedQuickSort(v, position + 1, right)
    else:
        insert.modifiedInsertionSort(v, position + 1, right)

# Obs: This code is based on the algorithms of teacher
# Maria Adriana Vidigal de Lima (FACOM-UFU).