#ifndef CLI
#define CLI
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <iostream>
#include "header_cli.h"

int writen(int sock, char *buf, int len);
int readn(int sock, char *buf, int len);
int sendData(int sock, void * data, sect_type sect, int size);
void * retrieveData(int sock, sect_type sector);
int serverConnectionInit(char *ip_addr,char *port, int *socket_main);

#endif
