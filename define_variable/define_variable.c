#include <stdio.h>

int main (void)
{
    goto END;

    FILE *fp = fopen("hoge.txt", "w");

END:
    // SEGV
    fclose(fp);
    return 0;
}
