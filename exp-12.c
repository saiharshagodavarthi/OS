 #include<iostream>
 #include<queue>
 #include<vector>
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
 queue<int>q;
 vector<int> frame;
 for (int i=0; i <n; i++) {
 page=pages[i];
 bool found=false;
 for (intx : frame) if (x==page) found= true;
 if (!found) {
 if (frame.size()< f) frame.push_back(page);
 else{
 int victim=q.front();q.pop();
for(int j=0; j< frame.size(); j++)
 if (frame[j]==victim) frame[j]=page;
 }
 q.push(page);
 faults++;
 }
 cout<< "Frames: ";
 for (intx : frame)cout<<x<< " ";
 cout<<endl;
 }
 cout<< "TotalPageFaults: "<<faults<<endl;
 return0;
 }
