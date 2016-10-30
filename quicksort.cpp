#include <iostream>
#include <random>
#include "helpers.h"
#include "quicksort.h"

template <class Iterator, class RandomGenerator>
Iterator Partition(Iterator first, Iterator last, RandomGenerator& generator) {
    Iterator left = first;
    Iterator right = last;
    int pivot = *(first + generator() % (last - first + 1));

    while (left <= right) {
        while (*left < pivot) {
            ++left;
        }
        while (*right > pivot) {
            --right;
        }

        if (left <= right) {
            std::swap(*left, *right);
            ++left;
            --right;
        }
    }

    return left;
}

template <class Iterator, class RandomGenerator>
void QuickSort(Iterator first, Iterator last, RandomGenerator& generator) {
    Iterator index = Partition(first, last, generator);

    if (first < index - 1) {
        QuickSort(first, index - 1, generator);
    }
    if (index < last) {
        QuickSort(index, last, generator);
    }

}

std::vector<int>& TQuickSorter::Sort(std::vector<int> &sequence) {
    std::mt19937 gen;
    gen.seed(SEED);

    QuickSort(sequence.begin(), sequence.end() - 1, gen);
    return sequence;
}

TQuickSorter::TQuickSorter() {
    name = __func__;
}
