#include<bits/stdc++.h>
using namespace std;
int main(){
int p[]={6, 7, 8, 9, 6, 7, 1, 6, 7, 8, 9, 1, 7, 9, 6},n=10,f=3,ft=0;
vector<int>fr;
for(int i=0;i<n;i++){
    auto it=find(fr.begin(),fr.end(),p[i]);
    if(it!=fr.end())continue;
    ft++;
    if(fr.size()<f)fr.push_back(p[i]);
    else{
        int idx=-1,far=-1;
        for(int j=0;j<fr.size();j++){
            int k;
            for(k=i+1;k<n;k++)
                if(fr[j]==p[k])break;
               if(k>far)far=k,idx=j;
               }
            fr[idx]=p[i];

    }
}
    cout<<ft;
}

