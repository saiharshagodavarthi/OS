#include<iostream>
 usingnamespacestd;
 intmain() {
 intms,ps,nop,mp[10],n;
 cout<< "Enter totalmemorysize: ";
 cin>>ms;
 cout<< "Enterpartitionsize: ";
 cin>>ps;
 n=ms/ps;
 cout<< "Totalpartitions: "<<n<<endl;
 cout<< "Enternumberofprocesses: ";
 cin>>nop;
 for(int i=0; i<nop; i++) {
 cout<< "Entermemory requiredforprocess "<< i+1<<": ";
 cin>>mp[i];
 }
 for(int i=0; i<nop&& i <n; i++){ if (mp[i]<=ps)
 cout<< "Process "<< i+1<< "allocated inpartition "<< i+1
 << "withinternal fragmentation: "<<ps-mp[i]<<endl;
 else
 cout<< "Process "<< i+1<<"notallocated(too large)."<<endl; }
 return0;
 }
