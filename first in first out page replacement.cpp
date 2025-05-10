#include<bits/stdc++.h>
using namespace std;
int main(){
int p[]={7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3},f=4,n=12,ft=0;
queue<int>q;
unordered_set<int>s;
for(int i=0;i<n;i++){
    if(!s.count(p[i])){
        ft++;
        if(q.size()==f){
            s.erase(q.front());
            q.pop();
        }
        s.insert(p[i]);
        q.push(p[i]);
    }
}
    cout<<ft;

}
