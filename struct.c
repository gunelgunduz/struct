#include<stdio.h>

struct students{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;

};

int main()
{
    struct students x;
    struct students x2;

    x.myLetter='A';
    x.name="Attila";
    x.lastname="Ilhan";
    x.no=1925;
    x.score=95.6;

    x2.myLetter='B';
    x2.name="Albert";
    x2.lastname="Camus";
    x2.no=1913;
    x2.score=94.8;

    printf("Letter:%c\n", x.myLetter);
    printf("Name:%s\n", x.name);
    printf("Last Name:%s\n", x.lastname);
    printf("No:%d\n", x.no);
    printf("Score:%.2f\n", x.score);
    printf("---------------\n");
     printf("Letter:%c\n", x2.myLetter);
    printf("Name:%s\n", x2.name);
    printf("Last Name:%s\n", x2.lastname);
    printf("No:%d\n", x2.no);
    printf("Score:%.2f\n", x2.score);
    return 0;
}