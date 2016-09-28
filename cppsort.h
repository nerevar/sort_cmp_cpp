#ifndef SORT_CMP_CPP_CPPSORT_H
#define SORT_CMP_CPP_CPPSORT_H

#include <vector>
#include "sorter.h"

class TCppSorter : public TSorter {
public:
    TCppSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
};

#endif //SORT_CMP_CPP_CPPSORT_H
