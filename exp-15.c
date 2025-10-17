#include<iostream>
 #include<vector>
 usingnamespacestd;
 intmain() {
 intn, f, indexBlock, length;
 cout<< "Enter totalnumberofdiskblocks: ";
 cin>>n;
 vector<int>block(n,0);
 cout<< "Enternumberof files: ";
 cin>>f;
 for(int i=0; i< f; i++) {
 cout<< "\nEnter indexblock forfile"<< i+1<< ": ";
 cin>> indexBlock;
 if (block[indexBlock]==1) {
 cout<< "Indexblockalreadyallocated.Filecannotbestored.\n";
 continue;
 }
 block[indexBlock]=1;
 cout<< "Enternumberofblocksneededforfile"<< i+1<<": ";
 cin>> length;
 vector<int>allocated;
 cout<< "Enterblocknumbers: ";
 for(int j=0; j< length; j++) {
 intb;
 cin>>b;
 if (b<n&&block[b]==0){
 block[b]=1;
 allocated.push_back(b);
 }else {
 cout<< "Block "<<b<< "alreadyallocatedor invalid.\n";
 }
 }
 cout<< "File"<< i+1<<"storedusing indexblock "
 << indexBlock<< "-> ";
 for (intb :allocated)cout<<b<< " ";
 cout<<endl;
 }
 return0;
