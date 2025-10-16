 #include<stdio.h>
 #include<sys/ipc.h>
 #include<sys/shm.h>
 #include<string.h>
 intmain() {
 key_tkey=ftok("shmfile",65);
 intshmid=shmget(key,1024,0666|IPC_CREAT);
 char*str=(char*)shmat(shmid,(void*)0,0);
 printf("WriteData: ");
 fgets(str,1024,stdin);
 printf("Datawritten inmemory:%s\n",str);
 shmdt(str);
 return0;
 }
