#include<stdio.h>
#include<string.h>

int strend(char *st, char t){
   if(st[strlen(st)-1] == t){
   		return 1;
   }
   return 0;
}

int main(){
	
	char st[100],temp;
	printf("enter the string: ");
	scanf("%s",st);
	char *p = st;
	printf("enter the end character ");
	scanf(" %c",&temp);
	printf("%d\n",strend(p,temp));
}