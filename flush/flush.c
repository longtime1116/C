#include <stdio.h>

int main(void)
{
    int ret;
    char buff[10] = {0};
    char buff2[10] = {0};

    FILE *in = fopen("./in.dat", "rb");
    FILE *out = fopen("./out.dat", "wb+");


    // setbuf(out, NULL);

    fread(buff, 1, 10, in);
    fwrite(buff, 1, 10, out);

    // 今書いたものをfreadで読み込み続けて出力したい
    //fseek(out, -sizeof(char), SEEK_CUR);
    fseek(out, 0, SEEK_SET);
    printf("ftell2: %li\n", ftell(out));

    fflush(out);
    fread(buff2, 1, 10, out);
    fseek(out, 10, SEEK_SET);
    fwrite(buff2, 1, 10, out);

    fclose(in);
    fclose(out);
}
