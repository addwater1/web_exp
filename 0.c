#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

#define SHELLSCRIPT "\
#bin/bash \n\
cd /usr/local \n\
ls | xargs -i cp -r {} /home/wpj/backup \n\
date > /home/wpj/list \n\
ls -R /usr/local >> /home/wpj/list \n\
"

void handler(){
	system(SHELLSCRIPT);
	printf("start backup\n");
	signal(SIGALRM, handler);
	alarm(3);
}

int main(){
	signal(SIGALRM, handler);
	alarm(3);
	for(int i=0; i < 20; i++){
		printf("sleep...\n");
		sleep(1);
	}
}
