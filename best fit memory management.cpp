#include<bits/stdc++.h>
using namespace std;
int main(){
int b[]={100,200,300,20};
int p[]={50,100,200,300};
int n=4;
int al[]={-1,-1,-1,-1};
for(int i=0;i<n;i++){
    int best=-1;
    for(int j=0;j<n;j++){
        if(b[j]>=p[i]&&(best==-1||b[best]>b[j])){
            best=j;}
                   if (best != -1) {
            al[i] = best;
            b[best] -= p[i];}


    }

}
for(int i=0;i<n;i++){
    cout<<p[i]<<"   ";
    if(al[i]!=-1){
        cout<<al[i]<<endl;}
        else{cout<<"not"<<endl;}
    }
}
