#include<bits/stdc++.h>
using namespace std;
int main(){
int id[]={1,2,3,4};
int bt[]={6,8,7,3};
int n=4;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(bt[j]<bt[i]){
            swap(bt[i],bt[j]);
            swap(id[j],id[i]);

        }

    }
}
    int wt,tt;
    int ttt=0,twt=0;
    wt=0;
    for(int i=0;i<n;i++){
        tt=wt+bt[i];
        cout<<id[i]<<"  "<<bt[i]<<"   "<<tt<<"   "<<wt<<endl;

    ttt+=tt;
    twt+=wt;
     wt+=bt[i];}
     cout<<"avg"<<ttt/n<<"  "<<twt/n<<endl;


}
