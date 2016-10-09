#include <iostream>
#include "quicksort.h"

int Partition(std::vector<int> &sequence, const int low, const int high) {
    int left = low;
    int right = high;
    int pivot = sequence[low + rand() % (high - low + 1)];

    while (left <= right) {
        while (sequence[left] < pivot) {
            ++left;
        }
        while (sequence[right] > pivot) {
            --right;
        }

        if (left <= right) {
            std::swap(sequence[left], sequence[right]);
            ++left;
            --right;
        }
    }

    return left;
}

void QuickSort(std::vector<int> &sequence, const int low, const int high) {
    int index = Partition(sequence, low, high);

    if (low < index - 1) {
        QuickSort(sequence, low, index - 1);
    }
    if (index < high) {
        QuickSort(sequence, index, high);
    }
}

std::vector<int>& TQuickSorter::Sort(std::vector<int> &sequence) {
    QuickSort(sequence, 0, sequence.size() - 1);
    return sequence;
}

TQuickSorter::TQuickSorter() {
    name = __func__;
}
