#include "unity.h"
#include "calc_gpa.h"

void test_calc_gpa(void)
{
    TEST_ASSERT_EQUAL(9.5, calc_gpa(57,6));
}
int test_calc_gpa(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_calc_gpa);
    return UNITY_END();
}