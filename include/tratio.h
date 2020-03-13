#pragma once

class TRatio
{
public:
    TRatio (int n = 0, int d = 0);
    int GetNumerator();
    int GetDenominator();

private:
    int numerator_;
    int denominator_;
};
