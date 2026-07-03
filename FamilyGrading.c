{\rtf1\ansi\ansicpg1252\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
int main() \{\
    int choice, fam, grade;\
    printf("=====Family System=====\\n");\
    printf("1. Family Info\\n");\
    printf("2. Family Grading\\n");\
    printf("3. Exit\\n");\
    printf("Please choose a number: \\n");\
    scanf("%d", &choice);\
    switch (choice)\{\
        case 1:\
        printf("1. Mommy \\n 2. Daddy \\n 3. Oldest sis \\n 4. Middle sis \\n 5. Youngest sis\\n");\
        printf("Please choose a family member: ");\
        scanf("%d", &fam);\
        switch (fam)\{\
            case 1:\
            printf("Name: Mami\\n Age: 45 \\nGrade: 100");\
            break;\
            case 2:\
            printf("Name: Dadi\\n Age: 45 \\nGrade: 95");\
            break;\
            case 3:\
            printf("Name: Miwa\\n Age: 17 \\nGrade: 80");\
            break;\
            case 4:\
            printf("Name:Ayan \\n Age: 7 \\nGrade: 71");\
            break;\
            case 5:\
            printf("Name: Iyan\\n Age: 5 \\nGrade: 60");\
            break;\
            default:\
            printf("Family member data not specified. Please choose the appropriate family member.");\
        \}\
        break;\
        case 2:\
    printf("=====Check your family member's grading!=====\\n");\
    printf("type in the number of your grade: \\n");\
    scanf("%d", &grade);\
    if (grade < 0 || grade > 100)\
\{\
    printf("Invalid grade.");\
\}\
    else if (grade >= 90)\{\
    printf("Family member is the leader! Awesone grade.");\
    \}\
    else if (grade >= 80)\{\
        printf("Family member is locked in! Good grade.");\
    \}\
    else if (grade >= 70)\{\
        printf("Family member is NOT cooking! Bad grade.");\
    \}\
    else \{\
        printf("Family member needs improvement! Very bad grade.");\
    \}\
        break;\
        case 3:\
        printf("Thank you for using the Family System. Have a nice day!");\
        break;\
        default: \
        printf("Wrong number. Please choose the correct one.");\
        \
    \}\
    return 0;\
\}}