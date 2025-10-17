 #include<iostream>
 #include<vector>
 usingnamespacestd;
 structNode{
 intblock;
 Node*next;
 };
 intmain() {
 intn, f, length;
 cout<< "Enter totalnumberofdiskblocks: ";
 cin>>n;
 vector<int>block(n,0);
 cout<< "Enternumberof files: ";
 cin>>f;
 for(int i=0; i< f; i++) {
 cout<< "\nEnternumberofblocksrequiredforfile"<< i+1<< ": ";
 cin>> length;
 Node*head=nullptr;
 Node* temp=nullptr;
 cout<< "Enterblocknumbers: ";
 for(int j=0; j< length; j++) {
 intb;
 cin>>b;
 if (b<n&&block[b]==0){ block[b]=1;
 Node*newNode=newNode{b,nullptr};
 if (!head)head=newNode;
 elsetemp->next=newNode;
 temp=newNode;
 }else {
 cout<< "Block "<<b<< "alreadyallocatedor invalid.\n";
 }
 }
 cout<< "File "<< i+1<< "allocatedblocks(linked): ";
 temp=head;
 while (temp) {
 cout<< temp->block<<"->";
 temp=temp->next; }
 cout<< "NULL"<<endl; }
 return0; }
