#include "tratio.h"

TRatio::TRatio(int n, int d)
{
    numerator_ = n;
    denominator_ = d;
}

int TRatio::GetNumerator()
{
    return numerator_;
}

int TRatio::GetDenominator()
{
    return denominator_;
}