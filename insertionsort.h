#ifndef SORT_CMP_CPP_INSERTIONSORT_H
#define SORT_CMP_CPP_INSERTIONSORT_H

#include <vector>
#include "sorter.h"

class TInsertionSorter : public TSorter {
public:
    TInsertionSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
};


#endif //SORT_CMP_CPP_INSERTIONSORT_H
