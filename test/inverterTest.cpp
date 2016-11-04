#include <inverter.h>

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <string.h>

namespace inverter
{

namespace test
{

using ::testing::Eq;
using ::testing::StrEq;

class InverterTest : public ::testing::Test
{

};

TEST_F(InverterTest, FailingTest)
{
//    FAIL();
}

TEST_F(InverterTest, ConstCharInverterNotCrashWhenDataIsEmptyEmpty)
{
    char* data = nullptr;
    invert(data, 0);
}

TEST_F(InverterTest, ConstCharInverterDoNotChangeDataWithOneElement)
{
    const char* input = "a";

    const size_t size = 2;
    char* data = new char[size];

    invert(input, data);

    EXPECT_THAT(data, StrEq("a"));
}

TEST_F(InverterTest, ConstCharInverterInvertsCorrectlyEvenLengthData)
{
    const char* input = "123456";

    const size_t size = 7;
    char* data = new char[size];

    invert(input, data);

    EXPECT_THAT(data, StrEq("654321"));
}

TEST_F(InverterTest, ConstCharInverterInvertsCorrectlyOddLengthData)
{
    const char* input = "123456789";

    const size_t size = 10;
    char* data = new char[size];

    invert(input, data);

    EXPECT_THAT(data, StrEq("987654321"));
}

TEST_F(InverterTest, CharInverterNotCrashWhenDataIsEmptyEmpty)
{
    char* data = nullptr;
    invert(data);
}

TEST_F(InverterTest, CharInverterDoNotChangeDataWithOneElement)
{
    const char* input = "a";

    const size_t size = 2;
    char* data = new char[size];

    strcpy(data, input);

    invert(data);

    EXPECT_THAT(data, StrEq("a"));
}

TEST_F(InverterTest, CharInverterInvertsCorrectlyEvenLengthData)
{
    const char* input = "1234";

    const size_t size = 5;
    char* data = new char[size];

    strcpy(data, input);

    invert(data);

    EXPECT_THAT(data, StrEq("4321"));
}

TEST_F(InverterTest, CharInverterInvertsCorrectlyOddLengthData)
{
    const char* input = "abcdefg";

    const size_t size = 8;
    char* data = new char[size];

    strcpy(data, input);

    invert(data);

    EXPECT_THAT(data, StrEq("gfedcba"));
}

TEST_F(InverterTest, TemplateInverterNotCrashWhenDataIsEmptyEmpty)
{
    uint16_t* data = nullptr;
    invert(data, 0);
}

TEST_F(InverterTest, TemplateInverterDoNotChangeDataWithOneElement)
{
    const size_t size = 1;
    uint16_t* data = new uint16_t[size];
    data[0] = 48;

    invert(data, size);

    EXPECT_THAT(data[0], Eq(48));
}

TEST_F(InverterTest, TemplateInverterInvertsCorrectlyEvenLengthData)
{
    const size_t size = 6;
    uint16_t* data = new uint16_t[size];

    data[0] = 1;
    data[1] = 2;
    data[2] = 5;
    data[3] = 678;
    data[4] = 21;
    data[5] = 2;

    invert(data, size);

    EXPECT_THAT(data[0], Eq(2));
    EXPECT_THAT(data[1], Eq(21));
    EXPECT_THAT(data[2], Eq(678));
    EXPECT_THAT(data[3], Eq(5));
    EXPECT_THAT(data[4], Eq(2));
    EXPECT_THAT(data[5], Eq(1));
}

TEST_F(InverterTest, TemplateInverterInvertsCorrectlyOddLengthData)
{
    const size_t size = 5;
    uint16_t* data = new uint16_t[size];

    data[0] = 234;
    data[1] = 4534;
    data[2] = 345;
    data[3] = 0;
    data[4] = 5;

    invert(data, size);

    EXPECT_THAT(data[0], Eq(5));
    EXPECT_THAT(data[1], Eq(0));
    EXPECT_THAT(data[2], Eq(345));
    EXPECT_THAT(data[3], Eq(4534));
    EXPECT_THAT(data[4], Eq(234));
}

} // namespace inverter

} // namespace inverter
