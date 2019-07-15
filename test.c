#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void foo(char *str)
{
	char* buf;
	buf=(char*)malloc(8*sizeof(char));
	strcpy (buf,str);
	FILE* file =fopen ("out.txt","w");
	if (!file) return;
	for( char*c =buf; *c; ++c)
		fputc((int)*c,file);
}
void main (void)
{
	char str[25]="Hello world 123456";
	foo (str);
}