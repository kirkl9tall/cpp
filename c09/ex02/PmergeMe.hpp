#pragma once 

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <limits>
#include <stdexcept>
#include <ctime>

int parseInt(const char* str);
std::vector<size_t> buildOrder(size_t n);
std::deque<int> fun1_deque(std::deque<int> &container);
std::vector<int> fun1(std::vector<int> &container);

