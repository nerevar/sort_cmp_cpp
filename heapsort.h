#ifndef SORT_CMP_CPP_HEAPSORT_H
#define SORT_CMP_CPP_HEAPSORT_H

#include <vector>
#include "sorter.h"

class THeapSorter : public TSorter {
private:
    std::vector<int> list;
    void SiftUp(int index);
    void SiftDown(int index);
public:
    THeapSorter();
    virtual std::vector<int>& Sort(std::vector<int> &sequence);
    void Insert(int item);
    int ExtractMin();
    void Clear();
};

#endif //SORT_CMP_CPP_HEAPSORT_H
