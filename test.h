#pragma once

struct answerOptions
{
    char optionLetter;
    char optionText[100];
    int isAnswerRight;
};
typedef struct answerOptions answerOptions;

struct question
{
    int questionNumber;
    char questionText[100];
    answerOptions answerOptions;
};
typedef struct question question;

struct test
{
    char testName[100];
    question question;
};
typedef struct test test;

int addTest(test *data, test test);