#include<stdio.h>
 #include<pthread.h>
 void* threadFunc(void*arg) {
 printf("Hellofromthread!\n");
 returnNULL;
 }
 intmain() {
 pthread_t tid;
 pthread_create(&tid,NULL, threadFunc,NULL);
 pthread_join(tid,NULL);
 printf("Threadexecutioncompleted.\n");
 return0;
 }
