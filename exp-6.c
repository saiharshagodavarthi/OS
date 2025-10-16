 #include<iostream>
 usingnamespacestd;
 intmain() {
 intn,m;
 cout<< "Enternumberofprocesses: ";
 cin>>n;
 cout<< "Enternumberof resources: ";
 cin>>m;
 intalloc[n][m],max[n][m],avail[m];
 cout<< "EnterAllocationMatrix:\n";
 for(int i=0;i<n;i++) for(int j=0;j<m;j++)cin>>alloc[i][j];
 cout<< "EnterMaximumMatrix:\n";
 for(int i=0;i<n;i++) for(int j=0;j<m;j++)cin>>max[i][j];
 cout<< "EnterAvailableResources:\n";
 for(int i=0;i<m;i++)cin>>avail[i];
 intneed[n][m], finish[n]={0},safeSeq[n],work[m];
 for(int i=0;i<m;i++)work[i]=avail[i];
 for(int i=0;i<n;i++) for(int j=0;j<m;j++)need[i][j]=max[i][j]-alloc[i][j];
 intcount=0;
 while(count<n){
 bool found=false;
 for(int i=0;i<n;i++){
 if(!finish[i]){
 int j;
 for(j=0;j<m;j++) if(need[i][j]>work[j])break;
 if(j==m){
 for(intk=0;k<m;k++)work[k]+=alloc[i][k];
 safeSeq[count++]=i;
 finish[i]=1;
 found=true;
 }
 }
 }
 if(!found){cout<<"Systemisnot inasafestate\n"; return0; }
 }
 cout<<"Systemis inasafestate.\nSafesequence: ";
 for(int i=0;i<n;i++)cout<<"P"<<safeSeq[i]<<" ";
 cout<<endl;
 return0;
 }
