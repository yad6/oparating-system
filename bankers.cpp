#include<bits/stdc++.h>
using namespace std;
int main(){
    int p=5,r=3;
 int al[5][3] = {{0,1,0}, {2,0,0}, {3,0,2}, {2,1,1}, {0,0,2}};
    int mx[5][3] = {{7,5,3}, {3,2,2}, {9,0,2}, {2,2,2}, {4,3,3}};
int av[3]={3,3,2};
int fn[5]={};
int sq[5];
int c=0,nd[5][3];

for(int i=0;i<p;i++){
    for(int j=0;j<r;j++){
        nd[i][j]=mx[i][j]-al[i][j];
    }
}
while(c<p){
    bool fd=false;
    for(int i=0;i<p;i++){
        if(!fn[i]){
            bool cr=true;
            for(int j=0;j<r;j++)
                if(av[j]<nd[i][j])cr=false;
            if(cr){
                for(int j=0;j<r;j++)av[j]+=al[i][j];

            fn[i]=1,sq[c++]=i,fd=true;}

        }
    }
    if(!fd){
        cout<<"n safe"<<endl;
        return 0;
    }

}
for(int i=0;i<p;i++){
    cout<<sq[i];
    if(i<p-1){
        cout<<"->";
    }
}

}
