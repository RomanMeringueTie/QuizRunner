#include <stdio.h>
#include "test.h"

int testRun()
{
    int testNumber;
    scanf("%d", &testNumber);
    return 0;
}

int createTest()
{
    return 0;
}

int main()
{
    printf("_______________________________________________________________________\n|                             QUIZRUNNER                              |\n|        Create by Artem Ocnev,Roman Kochatkov,Gorodilov Pavel        |\n|   Siberian State University of Telecommunications and Informatics   |\n|                             Group:IV-222                            |\n-----------------------------------------------------------------------\n\n\n");
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
