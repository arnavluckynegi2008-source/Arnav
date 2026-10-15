#ifndef CIRCUITVALIDATOR_H
#define CIRCUITVALIDATOR_H

#include <vector>
using namespace std;

class CircuitValidator {
public:
    static bool validGate(int gate, int totalGates);

    static bool validConnection(
        int from, int to, int totalGates);

    static bool duplicateConnection(
        int from, int to,
        const vector<vector<int>>& adj);
};

#endif
