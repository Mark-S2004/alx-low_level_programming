#include <stdio.h>

int main(void)
{
	char l = 'z';
	char n = l + 1;
	char bom = 'a';
	char bam = 'Z';
	printf("%d %c %d %c\n", bom, bom, bam, bam);
	return 0;
}
