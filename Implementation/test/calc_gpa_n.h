#include "unity.h"
#include "calc_gpa.h"

void test_calc_gpa_n(void)
{
    TEST_ASSERT_EQUAL(9.5, calc_gpa(1,6));
}
int test_calc_gpa(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_calc_gpa_n);
    return UNITY_END();
}