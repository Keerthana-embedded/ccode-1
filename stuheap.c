#include<stdio.h>
#include<stdlib.h>
typedef struct s1
{
char s[10];
struct s1 *p;
}stu;
int main()
{
stu *w;
w=(stu *)malloc(sizeof(stu));
printf("enter name\n");
scanf("%s",w->s);
printf("%s\n",w->s);
}
