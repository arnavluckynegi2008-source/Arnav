#include "CircuitValidator.h"

bool CircuitValidator::validGate(
    int gate, int totalGates) {
    return gate >= 0 && gate < totalGates;
}

bool CircuitValidator::validConnection(
    int from, int to, int totalGates) {
    if (!validGate(from, totalGates))
        return false;

    if (!validGate(to, totalGates))
        return false;

    if (from == to)
        return false;

    return true;
}

bool CircuitValidator::duplicateConnection(
    int from, int to,
    const vector<vector<int>>& adj) {
    if (from < 0 || from >= (int)adj.size())
        return false;

    for (int next : adj[from]) {
        if (next == to)
            return true;
    }

    return false;
}
