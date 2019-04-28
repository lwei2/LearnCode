#include <stdio.h>

int main(void)
{
	FILE *fd = fopen("/etc/passwd","r");
	if(fd == NULL)
		return -1;
	int ft = fileno(fd);
	printf("%d\n",ft);
	fclose(fd);
	return 0;
}
