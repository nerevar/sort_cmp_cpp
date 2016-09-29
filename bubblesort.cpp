#include <iostream>
#include "bubblesort.h"

std::vector<int>& TBubbleSorter::Sort(std::vector<int> &sequence) {
    int swap;

    for (int i = 0; i < sequence.size(); ++i) {
        for (int j = 0; j + 1 + i < sequence.size(); ++j) {
            if (sequence[j + 1] < sequence[j]) {
                swap = sequence[j];
                sequence[j] = sequence[j + 1];
                sequence[j + 1] = swap;
            }
        }
    }

    return sequence;
}

TBubbleSorter::TBubbleSorter() {
    name = __func__;
}
