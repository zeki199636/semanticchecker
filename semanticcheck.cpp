#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Represents a switch statement for semantic checking
class SwitchStatement {
private:
    set<int> caseLabels;
    bool hasDefault = false;

public:
    // Add a case label
    bool addCase(int value) {
        if (caseLabels.count(value)) {
            cout << "Semantic Error: Duplicate case label: " << value << endl;
            return false;
        }
        caseLabels.insert(value);
        return true;
    }

    // Add default label
    bool addDefault() {
        if (hasDefault) {
            cout << "Semantic Error: Multiple default labels in switch statement" << endl;
            return false;
        }
        hasDefault = true;
        return true;
    }
};

int main() {
    SwitchStatement sw;

    // Simulating switch cases
    sw.addCase(1);
    sw.addCase(2);
    sw.addCase(3);

    // Duplicate case (error)
    sw.addCase(2);

    // Default case
    sw.addDefault();

    // Duplicate default (error)
    sw.addDefault();

    return 0;
}
