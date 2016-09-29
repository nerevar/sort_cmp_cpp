#include <iostream>
#include "selectionsort.h"

std::vector<int>& TSelectionSorter::Sort(std::vector<int> &sequence) {
    int min, min_index;

    for (int i = 0; i < sequence.size(); ++i) {
        min = sequence[i];
        min_index = i;

        for (int j = i; j < sequence.size(); ++j) {
            if (sequence[j] < min) {
                min = sequence[j];
                min_index = j;
            }
        }

        sequence[min_index] = sequence[i];
        sequence[i] = min;
    }

    return sequence;
}

TSelectionSorter::TSelectionSorter() {
    name = __func__;
}
