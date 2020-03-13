#include "tratio.h"

TRatio::TRatio(int n, int d)
{
    if (d == 0) throw "Can't have denominator as zero!";

    if (d < 0)
    {
        n *= -1;
        d *= -1;
    }

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
