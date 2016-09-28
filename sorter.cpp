#include <iostream>
#include <ctime>
#include "sorter.h"
#include "helpers.h"

double TSorter::Test(const std::vector<int> &input_sequence, const std::vector<int> &correct_answer) {
    auto sequence = input_sequence;

    const clock_t begin = clock();
    auto &result = Sort(sequence);
    double duration = float(clock() - begin) / CLOCKS_PER_SEC;

    if (result != correct_answer) {
        std::cerr << "Test failed!" << std::endl;
        OutputSequence("\tTest sequence   :", input_sequence, std::cerr);
        OutputSequence("\tOutput sequence :", result, std::cerr);
        OutputSequence("\tCorrect answer  :", correct_answer, std::cerr);
        //throw std::runtime_error("Test failed");
        return -1;
    } else {
        //std::cerr << "Test passed" << std::endl;
        return duration;
    }

}

void TSorter::StressTest() {

}
