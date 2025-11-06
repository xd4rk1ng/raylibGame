#pragma once
#include <random>

namespace rnd {
    inline int Int(int min, int max) {
        static std::mt19937 gen(std::random_device{}());
        std::uniform_int_distribution<> dist(min, max);
        return dist(gen);
    }
}