#include <iostream>
#include <tchar.h>
#include "revi.h"

namespace dv1
{
    int deve(int x, int y)
    {
        x += adicao();

        return x/y;
    }
}

namespace dv2
{
    float deve(int x, int y)
    {
        return (float) x/ (float) y;
    }
}

int adicao()
{
    int t,i;
    t=6;
    i=7;

    return t + i;
}
