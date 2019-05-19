#include<stdio.h>
#include<string.h>

int strIndex(char str[], char t){
	int i;
	for( i = strlen(str);i >= 0; i--){
		if(str[i] == t){
			return i+1;
		}
	}
	return -1;
}

int main(){
	char ch[100];
	char temp;
	printf("enter a string ");
	scanf("%s", ch);
	printf("enter required character ");
	scanf(" %c", &temp);
	printf("The index position of the given character is:%d\n",strIndex(ch, temp));
}