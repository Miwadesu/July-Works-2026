{\rtf1\ansi\ansicpg1252\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\froman\fcharset0 Times-Roman;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs24 \cf0 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include <stdio.h>\
\
int main() \{\
    float c, temp2, temp1, f;\
    int code;\
    printf("Welcome to the temperature converter! Please type 1 for celsius and type 2 for fahrenheit:");\
    scanf("%d", &code);\
    switch (code) \{\
        case 1:\
        printf("Type the temperature in celsius: ");\
        scanf("%f", &temp1);\
        f = (temp1 * 9/5) + 32;\
        printf("The answer is %.2f\\tf.", f);\
        break;\
        case 2:\
        printf("Type the temperature in fahrenheit: ");\
        scanf("%f", &temp2);\
        c = (temp2 - 32) * 5/9;\
        printf("The answer is %.2f\\tc.", c);\
        break;\
        default:\
    printf("Invalid choice. Please enter 1 or 2.\\n");\
    \}\
    return 0;\
\}}