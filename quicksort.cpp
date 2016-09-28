#include <iostream>
#include "quicksort.h"

int GetRandomNumber(std::vector<int> &sequence, const size_t l, const size_t r) {
    return *(sequence.begin() + l + std::rand() % (r - l ));
}

int partition(std::vector<int> &sequence, const size_t l, const size_t r) {
    int i = l, j = r - 1;
    int x = GetRandomNumber(sequence, l, r);

    while (i <= j) {
        while (sequence[i] < x) ++i;
        while (sequence[j] > x) --j;

        if (i <= j) {
            std::swap(sequence[i], sequence[j]);
            ++i;
            --j;
        }
    }

    return i;
}

void QuickSort(std::vector<int> &sequence, const size_t l, const size_t r) {
    int index = partition(sequence, l, r);

    if (l < index - 1) {
        QuickSort(sequence, l, index);
    }
    if (index < r) {
        QuickSort(sequence, index, r);
    }
}

std::vector<int>& TQuickSorter::Sort(std::vector<int> &sequence) {
    QuickSort(sequence, 0, sequence.size());
    return sequence;
}

TQuickSorter::TQuickSorter() {
    name = __func__;
}
