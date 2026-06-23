// 341. Flatten Nested List Iterator
// Example 1:
// Input: nestedList = [[1,1],2,[1,1]]
// Output: [1,1,2,1,1]
// Explanation: By calling next repeatedly until hasNext returns false, the order of elements returned by next should be: [1,1,2,1,1].
// Example 2:
// Input: nestedList = [1,[4,[6]]]
// Output: [1,4,6]
// Explanation: By calling next repeatedly until hasNext returns false, the order of elements returned by next should be: [1,4,6].
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Dummy implementation of NestedInteger
class NestedInteger {
private:
    bool is_int;
    int value;
    vector<NestedInteger> list;

public:
    // Integer constructor
    NestedInteger(int val) {
        is_int = true;
        value = val;
    }

    // List constructor
    NestedInteger(vector<NestedInteger> lst) {
        is_int = false;
        list = lst;
    }

    bool isInteger() const {
        return is_int;
    }

    int getInteger() const {
        return value;
    }

    const vector<NestedInteger>& getList() const {
        return list;
    }
};

class NestedIterator {
    queue<int> flattenQ;

    void flatten(const vector<NestedInteger>& nestedList) {
        for (const NestedInteger& item : nestedList) {
            if (item.isInteger()) {
                flattenQ.push(item.getInteger());
            } else {
                flatten(item.getList());
            }
        }
    }

public:
    NestedIterator(vector<NestedInteger>& nestedList) {
        flatten(nestedList);
    }

    int next() {
        int front = flattenQ.front();
        flattenQ.pop();
        return front;
    }

    bool hasNext() {
        return !flattenQ.empty();
    }
};

int main() {
    // nestedList = [[1,1],2,[1,1]]

    vector<NestedInteger> nestedList = {
        NestedInteger(vector<NestedInteger>{
            NestedInteger(1),
            NestedInteger(1)
        }),
        NestedInteger(2),
        NestedInteger(vector<NestedInteger>{
            NestedInteger(1),
            NestedInteger(1)
        })
    };

    NestedIterator i(nestedList);

    while (i.hasNext()) {
        cout << i.next() << " ";
    }

    return 0;
}