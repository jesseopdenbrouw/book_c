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

void print_student(struct student_struct stud)
{
    printf("%08d ", stud.idcode);
    printf("%-29s ", stud.achternaam);
    printf("%-9s ", stud.klas);
    printf("%4.1f\n", stud.resultaat);
}

struct student_struct lees_student(void)
{
    struct student_struct stud;

    scanf("%d", &stud.idcode);
    scanf("%29s", stud.achternaam);
    scanf("%9s", stud.klas);
    scanf("%lf", &stud.resultaat);

    return stud;
}

double maximum(struct student_struct studs[], int aantal)
{
    double max = 0.0;

    for (int i = 0; i < aantal; i++)
    {
        if (studs[i].resultaat > max) {
            max = studs[i].resultaat;
        }
    }

    return max;
}

double gemiddelde(student_t studs[], int aantal)
{
    double som = 0.0;

    for (int i = 0; i < aantal; i++) {
        som = som + studs[i].resultaat;
    }

    return som / aantal;
}

void verhoog(struct student_struct studenten[], int aantal, double hoeveel)
{
    for (int i = 0; i < aantal; i++)
    {
        studenten[i].resultaat += hoeveel;
        if (studenten[i].resultaat > 10.0)
        {
            studenten[i].resultaat = 10.0;
        }
        if (studenten[i].resultaat < 1.0)
        {
            studenten[i].resultaat = 1.0;
        }
    }
}

int vergelijk_studenten(struct student_struct s1, struct student_struct s2)
{
    if (s1.idcode == s2.idcode && strcmp(s1.achternaam, s2.achternaam) == 0 && strcmp(s1.klas, s2.klas) == 0 && s1.resultaat == s2.resultaat) {
        return 1;
    }

    return 0;
}

int main(void)
{
    struct student_struct student1;

    student1.idcode = 19001234;
    strcpy(student1.achternaam, "Alberts");
    strcpy(student1.klas, "ep13");
    student1.resultaat = 7.3;

    struct student_struct student2 =
    { 19001235, "Blokland", "ep14", 6.9 };

    printf("%08d ", student1.idcode);
    printf("%-29s ", student1.achternaam);
    printf("%-9s ", student1.klas);
    printf("%4.1f\n", student1.resultaat);

    struct student_struct student3;

    printf("Geef idcode, achternaam, klas en resultaat: ");

    scanf("%d", &student3.idcode);
    scanf("%29s", student3.achternaam);
    scanf("%9s", student3.klas);
    scanf("%lf", &student3.resultaat);

    printf("%08d ", student3.idcode);
    printf("%-29s ", student3.achternaam);
    printf("%-9s ", student3.klas);
    printf("%4.1f\n", student3.resultaat);

    print_student(student3);

    struct student_struct student4;

    student4 = lees_student();
    print_student(student4);

    printf("--> %d\n", vergelijk_studenten(student4, student4));

    struct student_struct studenten[] = 
    {
        { 19001234, "Alberts", "ep13", 7.3 },
        { 19001235, "Blokland", "ep14", 6.9 },
        { 19001236, "Cornelie", "ep15", 4.9 },
    };

    for (int i = 0; i < 3; i++)
    {
        printf("%08d %s\n", studenten[i].idcode, studenten[i].achternaam);
    }

    int nr_studs = sizeof studenten / sizeof studenten[0];

    verhoog(studenten, nr_studs, 0.1);

    printf("Maximum: %4.1f\n", maximum(studenten, nr_studs));

    student_t student6 = { 0 }, student7 = { 0 };
    student_t heleklas[] = {
        { 19001234, "Alberts", "ep13", 7.3 },
        { 19001235, "Blokland", "ep14", 6.9 },
        { 19001236, "Cornelie", "ep15", 4.9 },
    };

    int aantal = sizeof heleklas / sizeof heleklas[0];

    printf("Gemiddelde: %4.1f\n", gemiddelde(heleklas, aantal));

    return 0;
}