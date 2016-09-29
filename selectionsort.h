#ifndef SORT_CMP_CPP_SELECTIONSORT_H
#define SORT_CMP_CPP_SELECTIONSORT_H

#include <vector>
#include "sorter.h"

class TSelectionSorter : public TSorter {
public:
    TSelectionSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
};

#endif //SORT_CMP_CPP_SELECTIONSORT_H
