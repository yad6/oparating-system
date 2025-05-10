#include<bits/stdc++.h>
using namespace std;
struct p{
int id,bt,pr;};
bool cmp(p a,p b){return a.pr<b.pr;}
int main(){
p p[]={{1,2,0},{3,2,2},{4,5,1}};
int n=3;
sort(p,p+n,cmp);
for(int i=0;i<n;i++){
    cout<<p[i].id<<"  "<<p[i].bt<<"  "<<p[i].pr<<endl;
}
}
