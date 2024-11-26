#ifndef PROJECT2_RAM_H
#define PROJECT2_RAM_H

#include <vector>

struct Ram {
    const int MAX_SIZE;
    std::vector<int> memory;
    Ram() : MAX_SIZE(8), memory(MAX_SIZE, 0) {};
    bool write(int, int);
    int read(int);
    std::size_t getSize();
};

#endif
