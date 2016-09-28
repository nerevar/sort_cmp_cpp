#include <iostream>
#include <vector>
#include "helpers.h"

void OutputSequence(const std::string name, const std::vector<int> &sequence, std::ostream &out) {
    out << name;
    for (std::vector<int>::const_iterator k = sequence.begin(); k != sequence.end(); ++k) {
        out << ' ' << *k;
    }
    out << std::endl;
}
