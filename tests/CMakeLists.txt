fing_package(GTest REQUIRED)

add_executable(test_normal_distribution test_normal_distribution.cpp)
target_link_libraries(test_normal_distribution cpp_finance_utils GTest::GTest GTest::Main)

enable_testing()
add_test(NAME NormalDistributionTest COMMAND test_normal_distribution)