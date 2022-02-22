#include<stdio.h>
const int N=5; 
enum change{done=1};
enum change swap(int *,int *);
int main()
{
	int a1[N],a2[N],i;
	printf("enter array 1 elements\n");
	for(i=0;i<N;i++)
		scanf("%d",&a1[i]);
	printf("enter array 2 elements\n");
	for(i=0;i<N;i++)
		scanf("%d",&a2[i]);
	enum change (*fntn)(int *,int *);
	fntn=swap;
	fntn(a1,a2);
        printf("array 1 elements\n");
	for(i=0;i<N;i++)
		printf("%d\n",a1[i]);
	printf("enter array 2 elements\n");
	for(i=0;i<N;i++)
		printf("%d\n",a2[i]);
}
enum change swap(int *p,int *q)
{
	int temp,i;
	while(*(p+i))
	{
		temp=*(p+i);
		*(p+i)=*(q+i);
		*(q+i)=temp;
		i++;
	}
	
	return done;
}
