#include <stdio.h>
int main()
{
    float m1;
    printf("Enter marks of Bengali : ");              // Bengali = m1
    scanf("%f",&m1);                                  // English = m2
    float m2;                                         // Physics = m3
    printf("Enter marks of English : ");              // Chemistry = m4
    scanf("%f",&m2);                                  // Maths = m5
    float m3;
    printf("Enter marks of Physics : ");
    scanf("%f",&m3);
    float m4;
    printf("Enter marks of Chemistry : ");
    scanf("%f",&m4);
    float m5;
    printf("Enter marks of Maths : ");
    scanf("%f",&m5);

    float T = (m1+m2+m3+m4+m5);
    printf("\nThe total Marks Obtained out of 500 : %f\n\n",T);

    float P = (m1+m2+m3+m4+m5)/5;
    printf("The total Percentage Obtained : %f\n\n",P);

    if (P>90)
    {
        printf("Grade : O\n");
    }
    else if (P>80)
    {
        printf("Grade : E\n");
    }
    else if (P>70)
    {
        printf("Grade : A+\n");
    }
    else if (P>60)
    {
        printf("Grade : A\n");
    }
    else if (P>50)
    {
        printf("Grade : B\n");
    }
    else if (P>40)
    {
        printf("Grade : C\n");
    }
    else if (P>30)
    {
        printf("Grade : D\n");
    }
    else
    {
        printf("Grade : F\n");
    }
    return 0;
}