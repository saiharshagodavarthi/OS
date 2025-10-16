 #include<stdio.h>
 intmain() {
 intn,bt[20],wt[20], tat[20],p[20], i, j, temp;
 floatavg_wt=0,avg_tat=0;
 printf("Enternumberofprocesses: ");
 scanf("%d",&n);
 printf("EnterBurstTimeforeachprocess:\n");
 for(i=0; i<n; i++) {
 printf("P%d: ", i+1);
 scanf("%d",&bt[i]);
 p[i]= i+1;
 }
 for(i=0; i<n-1; i++) {
 for (j= i+1; j<n; j++) {
 if (bt[i]>bt[j]) {
 temp=bt[i];bt[i]=bt[j];bt[j]= temp;
 temp=p[i];p[i]=p[j];p[j]= temp;
 }
 }
 }
 wt[0]=0;
 for(i=1; i<n; i++) {
 wt[i]=wt[i-1]+bt[i-1];
 }
 for(i=0; i<n; i++) {
 tat[i]=wt[i]+bt[i];
 avg_wt+=wt[i];
 avg_tat+=tat[i];
 }
 printf("\nProcess\tBT\tWT\tTAT\n");
 for(i=0; i<n; i++) {
 printf("P%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i], tat[i]);
 }
 printf("\nAverageWaitingTime=%.2f",avg_wt/n);
 printf("\nAverageTurnaroundTime=%.2f\n",avg_tat/n);
 return0;
 }
