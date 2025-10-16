 #include<stdio.h>
 #include<unistd.h>
 intmain() {
 intpid;
 pid=fork();
 if (pid<0){
 printf("Forkfailed!\n");
 }else if (pid==0) {
 printf("This isthechildprocess.PID=%d\n",getpid());
 }else{
 printf("This is the parent process.PID=%d,ChildPID=%d\n",getpid(),pid);
 }
 return0;
 }
