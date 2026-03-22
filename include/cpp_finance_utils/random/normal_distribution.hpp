#pragma
#include <random>

namespace cpp_finance_utils {
    class NormalDistribution {
        public:
            NormalDistribution(double mean=0.0, double stddev=1.0): gen(std::random_device{}()), dist(mean, stddev) {}
            double sample() {return dist(gen);}
        private:
        std::mt19937 gen;
        std::normal_distribution <> dist;
    };

}