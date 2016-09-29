#ifndef SORT_CMP_CPP_BUBBLESORT_H
#define SORT_CMP_CPP_BUBBLESORT_H

#include <vector>
#include "sorter.h"

class TBubbleSorter : public TSorter {
public:
    TBubbleSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
};

#endif //SORT_CMP_CPP_BUBBLESORT_H
