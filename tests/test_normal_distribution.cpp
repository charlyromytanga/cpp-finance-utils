#include <gtest/gtest.h>
#include "cpp_finance_utils/random/normal_distribution.hpp"

TEST(Radom, NormalSample) {
    cpp_finance_utils::NormalDistribution nd(0,1);
    double x = nd.sample();
    EXPECT_TRUE(x >= -10 && x <= 10);
}