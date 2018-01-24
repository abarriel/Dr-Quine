#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
int i=5;
if(i<0)return 0;char*s;asprintf(&s, "Sully_%d.c",i);int fd = open(s, 1537, 0644);char *c;asprintf(&c, "gcc %s -o Sully_%d; ./Sully_%d",s,i,i);i--;char *p="#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%cint main(){%cint i=%d;%cif(i<0)return 0;char*s;asprintf(&s, %cSully_%cd.c%c,i);int fd = open(s, 1537, 0644);char *c;asprintf(&c, %cgcc %cs -o Sully_%cd; ./Sully_%cd%c,s,i,i);i--;char *p=%c%s%c; dprintf(fd,p,10,10,10,10,10,i,10,34,37,34,34,37,37,37,34,34,p,34,10);close(fd);system(c);return 0;}%c"; dprintf(fd,p,10,10,10,10,10,i,10,34,37,34,34,37,37,37,34,34,p,34,10);close(fd);system(c);return 0;}
