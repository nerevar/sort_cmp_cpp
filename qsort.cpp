#include <iostream>
#include "qsort.h"

int compare(const void *one, const void *two)
{
    int a = *((int*)one);
    int b = *((int*)two);

    if (a < b)
        return -1;

    if (a == b)
        return 0;

    return 1;
}

std::vector<int>& TCppQuickSorter::Sort(std::vector<int> &sequence) {
    std::qsort(sequence.data(), sequence.size(), sizeof sequence[0], compare);
    return sequence;
}

TCppQuickSorter::TCppQuickSorter() {
    name = __func__;
}
