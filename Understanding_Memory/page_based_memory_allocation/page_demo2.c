#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
        printf("PID: %d\n",getpid());
        printf("System Page Size: %ld bytes\n\n",sysconf(_SC_PAGESIZE));
	
	char *tiny = malloc(1);
	printf("malloc(1)	%p\n",(void *)tiny);

	char *one_page = malloc(4096);
	printf("malloc(4096)	%p\n",(void *)one_page);

	char *over_page = malloc(4099);
	printf("malloc(4099)	%p\n",(void *)over_page);

	printf("\nPlease Enter to check /proc/%d/maps.....\n",getpid());
	getchar();

	return 0;
}
