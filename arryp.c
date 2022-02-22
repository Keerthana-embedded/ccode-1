#include<stdio.h>
#define N 5
void print(char (*)[N]);
int main()
{
char c[N]={'a','e','i','o','u'};
print(&c);
}	
void print(char (*p)[N])
{
int i;
for(i=0;i<N;i++)
	printf("%c\n",(*p)[i]);
}
