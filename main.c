#include <stdio.h>
#include "test.h"

int main()
{
    printf("Доступные команды:\n");
    printf("Создание теста: 1\n");
    printf("Прохождение теста: 2\n");
    int command;
    scanf("%d", &command);
    if (command == 1)
    {
        createTest();
    }
    if (command == 2)
    {
        testRun();
    }
    return 0;
}
