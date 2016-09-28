#include <iostream>
#include <fstream>
#include <vector>
#include "quicksort.h"
#include "qsort.h"
#include "cppsort.h"
#include "helpers.h"

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

int main() {
    std::ios::sync_with_stdio(false);

    /*
    int countNumbers;
    std::vector<int> sequence;

    Input(countNumbers, sequence);
    OutputSequence("Input seq:", sequence);
    std::vector<int> outputSequence = sequence;
    std::vector<int> &result = quickSorter.Sort(outputSequence);
    OutputSequence("Sorted seq:", result);
    */

    TQuickSorter quickSorter;
    cout << quickSorter.name << " " << quickSorter.Test({ 5, 4, 3, 2, 1 }, { 1, 2, 3, 4, 5 }) << endl;

    TCppQuickSorter cppQuickSorter;
    cout << cppQuickSorter.name << " " << cppQuickSorter.Test({ 5, 4, 3, 2, 1 }, { 1, 2, 3, 4, 5 }) << endl;

    TCppSorter cppSorter;
    cout << cppSorter.name << " " << cppSorter.Test({ 5, 4, 3, 2, 1 }, { 1, 2, 3, 4, 5 }) << endl;

    return 0;
}
