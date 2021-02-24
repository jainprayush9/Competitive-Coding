#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,int>P,pair<long long,int>Q){
    if(P.first==Q.first){
        return P.second<Q.second;
    }
    return P.first>Q.first;
}

int main(){
    int T;
    cin>>T;
    
    while(T--){
          int N;
          cin>>N;
          
          vector<pair<long long,int>>P;
          for(int i=0;i<N;++i){
              long long x;
              cin>>x;
              P.push_back({x,i+1});
          }
          
          sort(P.begin(),P.end(),comp);
          map<int,int>Q;
          for(int i=0;i<N;++i){
              Q[P[i].second]=i+1;
          }
          
          for(int i=1;i<=N;++i)cout<<Q[i]<<" ";
          cout<<endl;
    }
}
