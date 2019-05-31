#include<stdio.h>
#include<stdlib.h>

#define f (a+b+c)/(a-b-c)

int main(void){

    printf("½Ð¿é¤Ja,b,c¡G") ;

	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("result:%d\n",f);

	system("pause");
	return 0;
}
