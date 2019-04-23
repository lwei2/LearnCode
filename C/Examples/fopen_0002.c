
#include <stdio.h>

int main(void)
{
    FILE *fp =  fopen("my.txt","w");
    if(NULL!= fp)
    {
        fputs("fopen file", fp);
        fclose(fp);
    }
    return 0;
}
