#pragma once

int fibonacci_iterative(int sequence) {
    int result = 0;
    int result_ = 0;
    int result__ = 0;

    for (int i = 0; sequence >= i; i++) {
        if (0 == i) {
            result = 0;

        } else if (1 == i) {
            result = 1;

        } else {
            result__ = result_;
            result_ = result;
            result = result_ + result__;
        }
    }

    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
