#ifndef _LIB_H_
#define _LIB_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "ipc.h"
#include "slave.h"
#include "errors.h"
#include <sys/stat.h>
#include <sys/stat.h>

#define MD5_LENGTH 32

typedef struct md5Data{
    int pid;
    char md5[MD5_LENGTH + 1];
    char file[256];
    int isFinished;
} md5Data;

void error(char * message, int exitCode);

FILE * openFile(char * path, char * mode);

int isFile(char * path);

void createPipe(int fd[2]);

#endif