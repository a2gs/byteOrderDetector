#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv)
{
	union{
		short  s;
		char   c[sizeof(short)];
	}un;

	un.s = 0x0102;
	if (sizeof(short) == 2) {
		if (un.c[0] == 1 && un.c[1] == 2){
			printf("big-endian\n");
			return(1);
		}else if (un.c[0] == 2 && un.c[1] == 1){
			printf("little-endian\n");
			return(2);
		}else{
			printf("unknown\n");
			printf("sizeof(short) = %ld\n", sizeof(short));
			return(3);
		}
	}

	return(0);
}
