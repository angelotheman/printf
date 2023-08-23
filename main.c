#include <stdio.h>
#include "main.h"
#include <limits.h>

int main()
{
	char ch = 'a';
	char *name = "a name";
	int len = 0;
	int len2 = 0;
	char *str = "test";

        len = _printf("% ");
	len2 = printf("% ");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("xyz\n");
	len2 = printf("xyz\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("letter %c\n", ch);
	len2 = printf("letter %c\n", ch);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("hello %s\n", name);
	len2 = printf("hello %s\n", name);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("hello %shi\n", name);
	len2 = printf("hello %shi\n", name);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("zero %\n");
	len2 = printf("zero %\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("one %%\n");
	len2 = printf("one %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("one %%%\n");
	len2 = printf("one %%%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("two %%%%\n");
	len2 = printf("two %%%%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("two %%%%%\n");
	len2 = printf("two %%%%%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A %s sentence\n", "simple");
	len2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %v entence\n");
	len2 = printf("A simple %v entence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %c, %s\n", NULL, NULL);
	len2 = printf("NULL: %c, %s\n", NULL, NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple sentence%");
	len2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("% ");
	len2 = printf("% ");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("% s\n", str);
	len2 = printf("% s\n", str);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("\\\n");
	len2 = printf("\\\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	return (0);
}
