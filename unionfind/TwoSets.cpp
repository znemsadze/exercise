///* 
// * File:   main.cpp
// * Author: zviad
// *
//
// */
//#include <bits/stdc++.h>
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
//#include <map>
//
//
//
//
//
//using namespace std;
// 
//
// 
//
//int parent[101000];
//int rank[101000];
//
//
//
// int compscnt=0;
//const int N=101000; 
//  int xs[N];
// 
//    int x1[N];
// map<int,int> pr;
// int rs[N];
//  
// int find(int x){
//    if(parent[x]==x)return x;
//    parent[x]=find(parent[x]);
//    return parent[x];
//}
//
//
//
//
//int anansi() {
//    int n,a, b,x;
//    
//    freopen("input.txt", "rt", stdin);
//   
//   
//    cin>>n>>a>>b;
//
//    
//    for(int i=1;i<n+1;i++){
//        cin>>x;
//        pr[x]=i;
//        parent[i]=i;
//        xs[i]=x;
//    }
//    
//   
//    
//    for(int i=1;i<n+1;i++){
//        x1[i]=0;
//        if( pr.count(a-xs[i] )) parent[find(pr[a-xs[i]])]=find(i),x1[i]|=1;
//        if(pr.count(b-xs[i])) parent[find(pr[b-xs[i]])]=find(i),x1[i]|=2;
//    }
//
//    
//   
//    for(int i=1;i<=n;i++){
//        rs[i]=3;
//    }
//    for(int i=1;i<=n;i++){
//            rs[find(i)]&=x1[i];
//    }
// 
//    for(int i=1;i<=n;i++){
//        if(rs[i]==0){
//            cout<<"NO";
//            return 0;
//         }
//    }
//    cout<<"YES"<<"\n";
//    for(int i=1;i<=n;i++){
//        int res=((rs[find(i)]&1)==1 )?0:1 ;
//        cout<<res<<" ";
//    }
// 
//    return 0;
//}
//
// 
//
// 
// 
//
//int main() {
//    anansi();
//} 