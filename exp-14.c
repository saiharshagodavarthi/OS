#include<iostream>
 #include<vector>
 usingnamespacestd;
 intmain() {
 intn, f,start, length;
 cout<< "Enter totalnumberofdiskblocks: ";
 cin>>n;
 vector<int>block(n,0); //0=free,1=allocated
 cout<< "Enternumberof files: ";
 cin>>f;
 for(int i=0; i< f; i++) {
 cout<< "\nEnterstartingblockof file "<< i+1<< ": ";
 cin>>start;
 cout<< "Enter lengthof file"<< i+1<< ": ";
 cin>> length;
 boolallocated= true;
 for (int j=start; j<start+ length; j++) {
 if (j>=n||block[j]==1) {
 allocated=false;
 break;
 }
 }
 if (allocated) {
 for (int j=start; j<start+ length; j++)
 block[j]=1;
 cout<< "File"<< i+1<<"allocatedblocks: ";
 for (int j=start; j<start+ length; j++)
 cout<< j<<" ";
 cout<<endl;
 }else {
 cout<< "File"<< i+1<<"cannotbeallocated."<<endl;
 }
 }
 return0;
 }
