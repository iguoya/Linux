#ifndef TST_OPERATIONA_H
#define TST_OPERATIONA_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(Hello, operationA)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

#endif // TST_OPERATIONA_H
