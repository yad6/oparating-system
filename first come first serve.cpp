#include<bits/stdc++.h>
using namespace std;
void fcfs(int at[],int bt[],int n){
int wt[n],tt[n],ct[n];
wt[0]=0;
 ct[0]=at[0]+bt[0];
 tt[0]=ct[0]-at[0];
int ttt=0,twt=0;
for(int i=1;i<n-1;i++){
    if(ct[i-1]<at[i]){
        ct[i]=at[i]+bt[i];
    }
    else{
        ct[i]=ct[i-1]+bt[i];
    }
    tt[i]=ct[i]-at[i];
    wt[i]=tt[i]-bt[i];
}
for(int i=0;i<n;i++){
    cout<<at[i]<<"   "<<bt[i]<<"   "<<ct[i]<<"   "<<tt[i]<<"   "<<wt[i]<<endl;
    ttt+=tt[i];
    twt+=wt[i];
}
cout<<"average"<<ttt/n<<"   wt"<<twt/n<<endl;
}
int main(){
int at[]={0,1,2,3};
int bt[]={4,4,5,6};
int n=sizeof(bt)/sizeof(bt[0]);
fcfs(at,bt,n);
}
