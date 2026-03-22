#include <chrono>
#include <iostream>
#include "cpp_finance_utils/random/normal_distribution.hpp"

int main() {
    cpp_finance_utils::NormalDistribution nd;
    auto start = std::chrono::high_resolution_clock::now();
    for(int i=0;i<1000000;i++)nd.sample();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end-start;
    std::cout<<"Execution time: "<<diff.count()<<" s\n";
}