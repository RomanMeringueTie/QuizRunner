#include "test.h"

int addTest(test *data[100], test *test)
{
    int flag = 0;
    for (int i = 0; i < 100; i++)
    {
        if (data[i] == NULL)
            data[i] = test;
        else
            flag = 1;
    }
    return flag;
}
