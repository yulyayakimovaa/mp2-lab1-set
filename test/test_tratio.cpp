#include "tratio.h"
#include <gtest.h>

TEST(TRatio, can_create_ratio_without_parameters)
{
  ASSERT_NO_THROW(TRatio r);
}

TEST(TRatio, can_create_ration_with_one_parameter)
{
  // Arrange & Act
  TRatio r(3);

  // Assert
  EXPECT_EQ(3, r.GetNumerator());
}

TEST(TRatio, can_create_ratio_with_another_value)
{
  // Arrange & Act
  TRatio r(100500);

  // Assert
  EXPECT_EQ(100500, r.GetNumerator());
}

TEST(TRatio, can_create_ratio_with_two_parameters)
{
  // Arrange & Act
  TRatio r(1, 5);

  // Assert
  EXPECT_EQ(5, r.GetDenominator());
}

TEST(TRatio, throws_on_zero_denominator)
{
  // Arrange & Act & Assert
  ASSERT_ANY_THROW(TRatio r(1, 0));
}

TEST(TRatio, new_ratio_is_zero)
{
  // Arrange & Act
  TRatio r;

  // Assert
  EXPECT_EQ(0, r.GetNumerator());
  EXPECT_EQ(1, r.GetDenominator());
}

TEST(TRatio, ratio_with_negative_parts_becomes_positive)
{
  // Arrange & Act
  TRatio r(-1, -2);

  // Assert
  EXPECT_EQ(1, r.GetNumerator());
  EXPECT_EQ(2, r.GetDenominator());
}

TEST(TRatio, ratio_with_another_negative_parts_becomes_positive)
{
  // Arrange & Act
  TRatio r(-100500, -2);

  // Assert
  EXPECT_EQ(100500, r.GetNumerator());
  EXPECT_EQ(2, r.GetDenominator());
}

TEST(TRatio, moves_minus_to_numerator)
{
  // Arrange & Act
  TRatio r(1, -2);

  // Assert
  EXPECT_EQ(-1, r.GetNumerator());
  EXPECT_EQ(2, r.GetDenominator());
}
