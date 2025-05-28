#pragma once

int NWD(int lhs, int rhs) {
    int result = 0;
    auto lhs_abs = std::abs(lhs);
    auto rhs_abs = std::abs(rhs);

    for (int i = std::min(lhs_abs, rhs_abs); i > 0; i--) {
        if ((0 == lhs_abs % i) && (0 == rhs_abs % i)) {
            result = i;
            break;
        }
    }

    return result;
}

int NWW(int lhs, int rhs) {
    if (0 == lhs || 0 == rhs) {
        return 0;
    } else {
        return (std::abs(lhs * rhs)) / NWD(lhs, rhs);
    }
}
