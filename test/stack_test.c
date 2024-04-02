#include "stack.h"
#include "unity.h"

void setUp() {}
void tearDown() {}

void test_stack_push(void)
{
    stack_clear();
    stack_push('R');
    char ch = stack_pop();
    TEST_ASSERT_EQUAL_CHAR(ch, 'R');
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_stack_push);

    return UNITY_END();
}
