///* 
// * File:   main.cpp
// * Author: zviad
// *
//
// */
//
//#include <cstdlib>
//#include <math.h>
//#include<stdio.h>
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#include <map>
//#include <stack>
//
//
//
//using namespace std;
// 
//
// 
//
//
// int parent[100000];
//int rank[100000];
// int compscnt=0;
// 
//
// int find(int x){
//    if(parent[x]==x)return x;
//    parent[x]=find(parent[x]);
//    return parent[x];
//}
//
// 
//void Union(int u,int v){
//    int pu=find(u);int pv=find(v);
//    if(pu==pv){return;}
//    --compscnt;
//    if(rank[pu]<rank[pv]){
//        parent[pu]=pv;
//    }else{
//        parent[pv]=pu;
//        if(rank[pu]==rank[pv]){
//            rank[pu]++;
//        }
//    }
//    
//}
//
//
//int anansi() {
//    freopen("input.txt", "rt", stdin);
//    int n ,x,y;
//    cin>>n;
//    vector<int> cl1(0);
//    vector<int> cl2(0);
//    vector<int> bl1(0);
//    vector<int> bl2(0);
//    
//    for(int i=0;i<n;i++){
//        parent[i]=i;
//    }
//    
// 
//    for(int i=1;i<=n-1;i++){
//        cin>>x>>y;
//        if(find(x)==find(y)){
//            cl1.push_back(x);cl2.push_back(y);
//        }else{
//        Union(x,y);
//        }
//    }
// 
//    for(int i=2;i<=n;i++){
//        if(find(1)!=find(i)){
//            bl1.push_back(1);
//            bl2.push_back(i);
//            Union(1,i);
//        }
//    }
//    if(cl1.size()==0){
//        cout<<0;
//    }else{
//        cout<<cl1.size()<<"\n";
//     for(int i=0;i<cl1.size();i++){
//         cout<<cl1[i]<<" "<<cl2[i]<<" "<<bl1[i]<<" "<<bl2[i]<<"\n";
//     }
//    }
//    
//   
//    
//    return 0;
//}
//
// 
//
// 
// 
//
////int main() {
////    anansi();
////} 