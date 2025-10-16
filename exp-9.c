 #include<stdio.h>
 #include<pthread.h>
 void* task1(void*arg) {
 for(int i=0;i<5;i++)printf("Task1 running\n");
 returnNULL;
 }
 void* task2(void*arg) {
 for(int i=0;i<5;i++)printf("Task2 running\n");
 returnNULL;
 }
 intmain() {
 pthread_t t1, t2;
 pthread_create(&t1,NULL, task1,NULL);
 pthread_create(&t2,NULL, task2,NULL);
 pthread_join(t1,NULL);
 pthread_join(t2,NULL);
 printf("Boththreadsfinishedexecution.\n");
 return0;
 }
