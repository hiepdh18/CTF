#include<stdio.h>

int main(){
	int cookie = 0x2222;
	char buf[16];
	printf("&buf : %p, &cookie: %p\n", buf, &cookie);
	gets(buf);
	printf("\n cookie = %10x \n", cookie);
	printf("\n ebx = %10x \n", *(&cookie+1));
        printf("\n ebp = %10x \n", *(&cookie+2));
        printf("\n ret = %10x \n", *(&cookie+3));
	printf("\n ret = %10x \n", *(&cookie+4));
	printf("\n ret = %10x \n", *(&cookie+5));

	if(cookie == 0x000D0A00){
		printf("You win!\n");
	}
}
