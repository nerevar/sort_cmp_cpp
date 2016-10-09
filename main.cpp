#include <iostream>
#include <fstream>
#include <vector>
#include "helpers.h"
#include "quicksort.h"
#include "qsort.h"
#include "cppsort.h"
#include "bubblesort.h"
#include "selectionsort.h"

using std::cout;
using std::endl;

void Input(int &countNumbers, std::vector<int> &numbers) {
    std::ifstream infile ("input.txt");

    infile >> countNumbers;
    for (int i = 0; i < countNumbers; ++i) {
        int number;
        infile >> number;
        numbers.push_back(number);
    }
}

void RunStressTest(TSorter &sorter, TSorter &baseSorter, int testCount = 5) {
    srand(222);
    int counter = 0;

    for (int test = 0; test < testCount; ++test) {
        int size = rand() % 100000 + 1;
        std::vector<int> input(size);
        for (int i = 0; i < size; i++) {
            input[i] = rand() % 100 + 1;
        }

        std::vector<int> newInput(input);
        sorter.Test(newInput, baseSorter.Sort(input));

        counter++;
    }

    std::cerr << "Passed stress test!" << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);

    TQuickSorter quickSorter;
    TCppSorter cppSorter;

    RunStressTest(quickSorter, cppSorter, 1000);

//    std::vector<int> input = { 5, 4, 3, 2, 1, 2, 4, 6, 2, 3, 5 };
//    std::vector<int> answer = { 1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6 };
//
//    TQuickSorter quickSorter;
//    cout << quickSorter.name << " " << quickSorter.Test(input, answer) << endl;
//
//    TCppQuickSorter cppQuickSorter;
//    cout << cppQuickSorter.name << " " << cppQuickSorter.Test(input, answer) << endl;
//
//    TCppSorter cppSorter;
//    cout << cppSorter.name << " " << cppSorter.Test(input, answer) << endl;
//
//    TBubbleSorter bubbleSorter;
//    cout << bubbleSorter.name << " " << bubbleSorter.Test(input, answer) << endl;
//
//    TSelectionSorter selectionSorter;
//    cout << selectionSorter.name << " " << selectionSorter.Test(input, answer) << endl;

    return 0;
}
