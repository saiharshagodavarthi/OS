 #include<iostream>
 #include<vector>
 #include<unordered_map>
 usingnamespacestd;
 intmain() {
 intn, f,page, faults=0;
 cout<< "Enternumberof frames: ";
 cin>>f;
 cout<< "Enternumberofpages: ";
 cin>>n;
 vector<int>pages(n);
 cout<< "Enterreferencestring: ";
 for (int i=0; i <n; i++)cin>>pages[i];
 vector<int> frame;
 unordered_map<int,int> lastUsed;
 for (int i=0; i <n; i++) {
 page=pages[i];
 bool found=false;
 for (intx : frame) if (x==page) found= true;
 if (!found) {
 if (frame.size()< f) frame.push_back(page);
 else{
 int lru_index=0;
 intmin_last= i;
 for (int j=0; j< frame.size(); j++) {
 if (lastUsed[frame[j]]<min_last) {
 min_last=lastUsed[frame[j]];
 lru_index= j;
 }
 }
 frame[lru_index]=page;
 }
 faults++;
 }
 lastUsed[page]= i;
 cout<< "Frames: ";
 for (intx : frame)cout<<x<< " ";
 cout<<endl;
 }
 cout<< "TotalPageFaults: "<<faults<<endl;
 return0;
 }
