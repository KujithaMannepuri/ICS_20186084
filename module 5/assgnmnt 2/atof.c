#include<stdio.h>
#include<string.h>
#include <ctype.h>

float atof(char s[])
{
	float value, power;
	int i = 0, sign;

	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (value = 0.0; isdigit(s[i]); i++)
		value = (10.0 * value) + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		value = 10.0 * value + (s[i] - '0');
		power *= 10.0;
	}
	return sign * value/power;
}

int main(){
	char ch[100];
	printf("enter a string ");
	scanf("%s",ch);
	printf("%.2f\n", atof(ch));
}