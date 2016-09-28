#ifndef SORT_CMP_CPP_QUICKSORT_H
#define SORT_CMP_CPP_QUICKSORT_H

#include <vector>
#include "sorter.h"

class TQuickSorter : public TSorter {
public:
    TQuickSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
};

#endif //SORT_CMP_CPP_QUICKSORT_H
