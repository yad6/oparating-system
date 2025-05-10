#include<bits/stdc++.h>0
using namespace std;
void fcfss(int at[],int bt[],int n){
int tat[n],ct[n],wt[n];

wt[0]=0;
ct[0]=at[0]+bt[0];
tat[0]=ct[0]-at[0];
int twt=0,ttat=0;
for(int i=1;i<n;i++){
    if(ct[i-1]<at[i]){
        ct[i]=at[i]+bt[i];
    }
    else{
        ct[i]=ct[i-1]+bt[i];
    }

    tat[i]=ct[i]-at[i];
    wt[i]=tat[i]-bt[i];
    }
    cout<<"process   arival   brust   comilation   turn around     waiting "<<endl;
    cout<<"___________________________________________________________________"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<"                |"<<at[i]<<"           |"<<bt[i]<<"              |"<<ct[i]<<"                |"<<tat[i]<<"              |"<<wt[i]<<endl;
        cout<<"__________________________________________________________________________"<<endl;
    }
 for(int i=0;i<n;i++){
    twt+=wt[i];
    ttat+=tat[i];
 }
 cout<<"waiting average:"<<twt/n<<endl;
 cout<<"tat average:"<<ttat/n<<endl;
}
int main(){
int at[]={7,2,4,6};
int bt[]={6,8,7,3};
int n=sizeof(bt)/sizeof(bt[0]);
fcfss(at,bt,n);
}
