#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

struct student_struct {
    int idcode;
    char achternaam[30];
    char klas[10];
    double resultaat;
};

typedef struct student_struct student_t;

void print_student(student_t stud)
{
    printf("| %08d ", stud.idcode);
    printf("| %-29s ", stud.achternaam);
    printf("| %-9s ", stud.klas);
    printf("| %4.1f |\n", stud.resultaat);
}

void verhoog(student_t studenten[], int aantal, double hoeveel)
{
    for (int i = 0; i < aantal; i++)
    {
        studenten[i].resultaat += hoeveel;
        if (studenten[i].resultaat > 10.0)
        {
            studenten[i].resultaat = 10.0;
        } else if (studenten[i].resultaat < 1.0)
        {
            studenten[i].resultaat = 1.0;
        }
    }
}

void printheadfoot(void) {
    printf("+----------+-------------------------------+-----------+------+\n");
}

int main(void)
{
    struct student_struct studenten[] =
    {
        { 19001234, "Alberts", "ep13", 7.3 },
        { 19001235, "Blokland", "ep14", 6.9 },
        { 19001236, "Cornelie", "ep15", 4.9 },
        { 19001237, "Demmerie", "ep16", 10.0},
    };

    int nr_studs = sizeof studenten / sizeof studenten[0];

    printheadfoot();
    for (int i = 0; i < nr_studs; i++)
    {
        print_student(studenten[i]);
    }
    printheadfoot();

    verhoog(studenten, nr_studs, 0.1);

    printf("\n\n");

    printheadfoot();
    for (int i = 0; i < nr_studs; i++)
    {
        print_student(studenten[i]);
    }
    printheadfoot();

    return 0;
}