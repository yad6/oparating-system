#include<bits/stdc++.h>
using namespace std;
int main(){
int p[]={7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3},n=12,f=4,ft=0;
list<int>dq;
unordered_set<int>s;
for(int i=0;i<n;i++){
    if(!s.count(p[i])){
        ft++;
        if(dq.size()==f){
            s.erase(dq.back());
            dq.pop_back();

        }
    }
        else{dq.erase(find(dq.begin(),dq.end(),p[i]));}

            s.insert(p[i]);
        dq.push_front(p[i]);

}
    cout<<ft;

}

