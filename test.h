#ifndef TEST_H
#define TEST_H <test.h>
#include TEST_H
#endif

struct question
{
    int questionNumber;
    char[100] questionText;
    answerOptions answerOptions;
};
typedef struct question question;

struct answerOptions
{
    char optionLetter;
    char[100] optionText;
    int isAnswerRight;
};
typedef struct answerOptions answerOptions;