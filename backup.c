#include "common.h"

int main(){
	signal(SIGALRM, handler);
	alarm(CYCLE_TIME);
	for(int i=0;; i++){
		printf("sleep...\n");
		sleep(1);
	}
}
