#include<stdio.h>
#include<string.h>
#define N 20
enum check{notequal=0,equal=1};
enum check  my_strcmp(char *,char *);
int main()
{
	char s1[N];
	char s2[N];
	char *p,*q;
	puts("enter string1\n");
	scanf("%s",s1);
	puts("enter string2\n");
	scanf("%s",s2);
	enum check (*fntn)(char *,char *);
	fntn=my_strcmp;
	if(fntn(s1,s2)==equal)
	printf("both are equal");
	else
		printf("both are not equal");
	
}

enum check my_strcmp(char *p,char *q)
{
	int i=0,j=0;
	while(*(p+i))
	{
		if(*(p+i)==*(q+j))
		{
			i++;
			j++;
		}
		else 
		{
			return notequal;
		}
	}
	if(*(q+j)=='\0')
	return equal;
	else
		return notequal;
}

