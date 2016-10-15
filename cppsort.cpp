#include <iostream>
#include <algorithm>
#include "cppsort.h"

std::vector<int>& TCppSorter::Sort(std::vector<int> &sequence) {
    std::sort(sequence.begin(), sequence.end());
    return sequence;
}

TCppSorter::TCppSorter() {
    name = __func__;
}
