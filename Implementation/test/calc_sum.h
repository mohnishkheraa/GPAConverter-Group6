#include "unity.h"
#include "calc_sum.h"

void test_calc_sum(void)
{
    int sum_arr[]={35,65};
    TEST_ASSERT_EQUAL(100, calc_sum(sum_arr,2));
}
int test_calc_gpa(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_calc_sum);
    return UNITY_END();
}