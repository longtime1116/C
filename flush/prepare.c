#include <stdio.h>

int main(void)
{
    FILE *f = fopen("./in.dat", "wb");
    char hoge[10] = "abcdefghi\0";
    fwrite(hoge, sizeof(char), 10, f);
    fclose(f);
}
