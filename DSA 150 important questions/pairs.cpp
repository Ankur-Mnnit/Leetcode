#include<bits/stdc++.h>
using namespace std;
 
void pairs(vector<int> v,int target){
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        if(m.find(v[i]-target)!=m.end()){
            cout<<i<<m[v[i]-target];
        }
        m[v[i]]=i;
    }
    
}

int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    pairs(v,5);
}