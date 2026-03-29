#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <vector>
#include <stdexcept>

template <typename T>
class ArrayStack {
private:
    std::vector<T> data;

public:
    void push(const T& value) {
        // TODO

    }

    void pop() {
        // TODO
        if ()
    }

    T top() const {
        // TODO
        return T();
    }

    bool empty() const {
        // TODO
        if (data.empty()) {
            return true;
        }
        return false;
    }

    int size() const {
        // TODO
       return data.size();
    }
};

#endif
