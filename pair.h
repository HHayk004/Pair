#ifndef PAIR_H
    #define PAIR_H

    #include <utility>

    template <typename T, typename U>
    struct Pair
    {
        T first;
        U second;

        Pair();
        Pair(T val1, U val2);
        Pair(const Pair& other);
        Pair(Pair&& other);

        Pair& operator=(const Pair& other);
        Pair& operator=(Pair&& other);

        ~Pair() = default;
    };

    #include "pair.hpp"

#endif
