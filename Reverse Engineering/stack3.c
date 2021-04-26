#include<stdio.h>

int main(){
	int cookie;
	char buf[16];
	printf("&buf : %p, &cookie: %p\n", buf, &cookie);
	gets(buf);
	printf("\n cookie = %10x , ret: %10x\n", cookie, *(&cookie+3));
	if(cookie == 0x00020300){
		printf("You win!\n");
	}
}
