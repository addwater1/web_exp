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
#define CYCLE_TIME 5

void handler();
