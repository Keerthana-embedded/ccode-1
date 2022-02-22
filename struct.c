#include<stdio.h>
#include<stdlib.h>
typedef struct s1
{
	char i[10];
	struct s1 *p;
}stu;
typedef struct s2
{
	char j[10];
	struct s2 *p;
}str;
int my_strcmp(stu *q,str *r);
int main()
{
	stu *q;
	str *r;
	q=(stu *)malloc(sizeof(struct s1));
	r=(str *)malloc(sizeof(struct s2));
	printf("enter string1\n");
	scanf("%s",q->i);
	printf("enter string2\n");
	scanf("%s",r->j);
	if(my_strcmp(q,r)==0)
		printf("equal\n");
	else
		printf("not equal\n");
}
	int my_strcmp(stu *q,str *r)
	{
        int z=0;
	while((q->i[z])!='\0')
	{
       if((q->i[z])!=(r->j[z]))
            return 1;
            z++;
	}
	return 0;
	}
