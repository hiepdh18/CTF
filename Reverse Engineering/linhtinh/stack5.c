#include <stdio.h>

int main ( )
{
	int cookie ;
	char buf[16];
	printf("&buf :%p,&cookie :%p\n",buf,&cookie);
	gets(buf);
	if(cookie==0x000D0A00)
	{
		printf("You lose!\n") ;
	}
}
