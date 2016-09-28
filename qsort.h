#ifndef SORT_CMP_CPP_QSORT_H
#define SORT_CMP_CPP_QSORT_H

#include <vector>
#include "sorter.h"

class TCppQuickSorter : public TSorter {
public:
    TCppQuickSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
};

#endif //SORT_CMP_CPP_QSORT_H
