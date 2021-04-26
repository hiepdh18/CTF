#include<stdio.h>

int main(){
	int cookie = 0x2222;
	char buf[16];
	printf("buf : %p, &cookie: %p\n", buf, &cookie);
	gets(buf);
	printf("\n cookie = %10x \n", cookie);
	printf("\n &cookie+1 = %10x | cookie+1 = %10x\n", (&cookie+1), *(&cookie+1));
	printf("\n &cookie+2 = %10x | cookie+2 = %10x\n", (&cookie+2), *(&cookie+2));
	printf("\n &cookie+3 = %10x | cookie+3 = %10x\n", (&cookie+3), *(&cookie+3));
	printf("\n &cookie+4 = %10x | cookie+4 = %10x\n", (&cookie+4), *(&cookie+4));
	printf("\n &cookie+5 = %10x | cookie+5 = %10x\n", (&cookie+5), *(&cookie+5));
	printf("\n &cookie+6 = %10x | cookie+6 = %10x\n", (&cookie+6), *(&cookie+6));
	printf("\n &cookie+7 = %10x | cookie+7 = %10x\n", (&cookie+7), *(&cookie+7));
	printf("\n &cookie+8 = %10x | cookie+8 = %10x\n", (&cookie+8), *(&cookie+8));

	if(cookie == 0x000D0A00){
		printf("You win!\n");
	}
}
