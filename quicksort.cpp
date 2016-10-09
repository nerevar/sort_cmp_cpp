#include <iostream>
#include "quicksort.h"

int GetRandomNumber(std::vector<int> &sequence, const size_t left, const size_t right) {
    return *(sequence.begin() + left + std::rand() % (right - left));
}

size_t Partition(std::vector<int> &sequence, const size_t left, const size_t right) {
    size_t leftIter = left, rightIter = right - 1;
    int middle = GetRandomNumber(sequence, left, right);
    int swap;

    while (leftIter <= rightIter) {
        while (sequence[leftIter] < middle) {
            ++leftIter;
        }
        while (sequence[rightIter] > middle) {
            --rightIter;
        }

        if (leftIter <= rightIter) {
            swap = sequence[leftIter];
            sequence[leftIter] = sequence[rightIter];
            sequence[rightIter] = swap;
            ++leftIter;
            --rightIter;
        }
    }

    return leftIter;
}

void QuickSort(std::vector<int> &sequence, const size_t left, const size_t right) {
    size_t index = Partition(sequence, left, right);

    if (left < index - 1) {
        QuickSort(sequence, left, index);
    }
    if (index < right) {
        QuickSort(sequence, index, right);
    }
}

std::vector<int>& TQuickSorter::Sort(std::vector<int> &sequence) {
    QuickSort(sequence, 0, sequence.size());
    return sequence;
}

TQuickSorter::TQuickSorter() {
    name = __func__;
}
