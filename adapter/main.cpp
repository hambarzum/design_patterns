#include <iostream>

#include "stack.hpp"

int main() {
    Stack st;
    for(int i = 0; i <= 100; i += 10) {
        st.push(i);
    }

    while(!st.isEmpty()) {
        std::cout << st.top() << std::endl;
        st.pop();
    }
}