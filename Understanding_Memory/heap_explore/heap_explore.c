#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("PID: %d\n",getpid());

	int *p1 = malloc(100);
	int *p2 = malloc(1000);
	int *p3 = malloc(10000);
	int *p4 = malloc(100000);

	printf("============ Pointer Variable ( On stack) =========================\n");
	printf("	&p1 = %p\n",(void *)&p1);
	printf("	&p2 = %p\n",(void *)&p2);
	printf("	&p3 = %p\n",(void *)&p3);
	printf("	&p4 = %p\n",(void *)&p4);

	printf("=========== Heap Allocation ( On Heap) =============================\n");
	printf("	p1 -> %p	(100 bytes)\n",(void *)p1);
	printf("	p2 -> %p	(1000 bytes)\n",(void *)p2);
	printf("	p3 -> %p	(10000 bytes)\n",(void *)p3);
	printf("	p4 -> %p	(100000 bytes)\n",(void *)p4);

	printf("Please ENTER to exit testing........");
	getchar();

	free(p1);
	free(p2);
	free(p3);
	free(p4);

	return 0;
}
