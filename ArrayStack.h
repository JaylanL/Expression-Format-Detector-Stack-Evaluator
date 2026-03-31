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
        data.push_back(value);
    }

    void pop() {
        // TODO
        try {
            data.pop_back();
        } catch (std::underflow_error& e) {
            std::cout << e.what() << std::endl;
        }
    }

    T top() const {
        // TODO
       if (data.empty()) {
           throw std::underflow_error("ArrayStack is empty");
       }
        return data.back();
    }

    bool empty() const {
        // TODO
        return data.empty();
    }

    int size() const {
        // TODO
       return data.size();
    }
};

#endif
