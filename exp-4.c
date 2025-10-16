#include<iostream>
 #include<algorithm>
 usingnamespacestd;
 structProcess{
 intpid,bt,priority,wt, tat;
 };
 //Comparefunctionforsortingbasedonpriority
 boolcompare(Processa,Processb) {
 return(a.priority<b.priority);
 }
 intmain() {
 intn;
 cout<< "Enternumberofprocesses: ";
 cin>>n;
 Processp[n];
 for(int i=0; i <n; i++) {
 p[i].pid= i+1;
 cout<< "EnterBurstTimeandPriority forProcess"<<p[i].pid<< ": ";
 cin>>p[i].bt>>p[i].priority;
 }
 //Sortprocessesbypriority
 sort(p,p+n, compare);
 //CalculateWaitingTimeandTurnaroundTime
 p[0].wt=0;
 for(int i=1; i<n; i++) {
 p[i].wt=p[i-1].wt+p[i-1].bt;
 }
 floatavgWT=0,avgTAT=0;
 for(int i=0; i<n; i++) {
 p[i].tat=p[i].wt+p[i].bt;
 avgWT+=p[i].wt;
 avgTAT+=p[i].tat;
 }
 avgWT/=n;
 avgTAT/=n;
 cout<< "\nProcess\tBT\tPriority\tWT\tTAT\n";
 for(int i=0; i<n; i++) {
 cout<<p[i].pid<< "\t"<<p[i].bt<<"\t"<<p[i].priority
 <<"\t\t"<<p[i].wt<< "\t"<<p[i].tat<<endl;
 }
 cout<< "\nAverageWaitingTime= "<<avgWT;
 cout<< "\nAverageTurnaroundTime= "<<avgTAT<<endl;
 return0;
 }
