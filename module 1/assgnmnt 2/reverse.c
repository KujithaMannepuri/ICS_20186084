#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char rev[100];
	gets(str);
	int j = 0;
	int i;
	int len = strlen(str);
	// printf("%s", a);
	for (i = len - 1; i >= 0; --i)
	{
		rev[j++] = str[i];
	}
	rev[i] = '\0';
	printf("%s\n", rev);
	return 0;
}
