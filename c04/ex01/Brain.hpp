#pragma once
#include <iostream>

class Brain{
    std::string idea[100];
    public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
};


