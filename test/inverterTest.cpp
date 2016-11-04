#include <gtest/gtest.h>

#include <inverter.h>

namespace inverter
{

namespace test
{
class InverterTest : public ::testing::Test
{

};

TEST_F(InverterTest, FailingTest)
{
    FAIL();
}

} // namespace inverter

} // namespace inverter
