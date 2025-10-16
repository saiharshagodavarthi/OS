 #include<iostream>
 #include<queue>
 usingnamespacestd;
 structProcess{
 intpid,bt, rt,wt, tat;
 };
 intmain() {
intn, tq;
 cout<< "Enternumberofprocesses: ";
 cin>>n;
 Processp[n];
 for(int i=0; i<n; i++) {
 p[i].pid= i+1;
 cout<< "EnterBurstTimeforProcess "<<p[i].pid<<": ";
 cin>>p[i].bt;
 p[i].rt=p[i].bt;//remainingtime
 }
 cout<< "EnterTimeQuantum: ";
 cin>>tq;
 int time=0,completed=0;
 queue<int>q;
 for(int i=0; i<n; i++)q.push(i);
 while(!q.empty()) {
 int i=q.front();
 q.pop();
 if(p[i].rt>tq) {
 time+= tq;
 p[i].rt-= tq;
 q.push(i);//re-queue theprocess
 }else{
 time+=p[i].rt;
 p[i].wt= time-p[i].bt;
 p[i].tat= time;
 p[i].rt=0;
 completed++;
 } }
 floatavgWT=0,avgTAT=0;
 cout<< "\nProcess\tBT\tWT\tTAT\n";
 for(int i=0; i<n; i++) {
 cout<<p[i].pid<< "\t"<<p[i].bt
 <<"\t"<<p[i].wt<<"\t"<<p[i].tat<<endl;
 avgWT+=p[i].wt;
 avgTAT+=p[i].tat;
 }
 cout<< "\nAverageWaitingTime= "<<avgWT/n;
 cout<< "\nAverageTurnaroundTime= "<<avgTAT/n<<endl; return0;
 }
