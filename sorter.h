#ifndef SORT_CMP_CPP_SORTER_H
#define SORT_CMP_CPP_SORTER_H

#include <vector>

class TSorter {
public:
    std::string name;

    virtual std::vector<int>& Sort(std::vector<int> &sequence) = 0;
    double Test(const std::vector<int> &input_sequence, const std::vector<int> &correct_answer);
    void StressTest();

};

#endif //SORT_CMP_CPP_SORTER_H
