#include "common.h"

void handler(){
	system(SHELLSCRIPT);
	printf("start backup\n");
	signal(SIGALRM, handler);
	alarm(CYCLE_TIME);
}
