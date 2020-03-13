#include "tratio.h"

#include <gtest.h>

TEST(TRatio, can_create_ratio_without_parameters)
{
  ASSERT_NO_THROW(TRatio r);
}

TEST(TRatio, can_create_ratio_with_parameter)
{
  // Arrange & Act
  TRatio r(4);

  // Assert
  EXPECT_EQ(4, r.GetNumerator());
}

TEST(TRatio, can_create_ratio_with_another_parameter)
{
  // Arrange & Act
  TRatio r(100500);

  // Assert
  EXPECT_EQ(100500, r.GetNumerator());
}

TEST(TRatio, can_get_denominator)
{
  // Arrange & Act
  TRatio r(1, 3);

  // Assert
  EXPECT_EQ(3, r.GetDenominator());
}