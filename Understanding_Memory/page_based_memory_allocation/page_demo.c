#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("PID: %d\n",getpid());
	printf("System Page Size: %ld bytes\n\n",sysconf(_SC_PAGESIZE));

	return 0;
}

