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
//struct LinkList{
//    int data;
//    LinkList* next;
//} ;
//
//
//
//LinkList* insert(int x,LinkList* head);
// 
//void print(LinkList* head);
//
//int parent[100000];
//int rank[100000];
// 
//int compscnt=0;
//int find(int x){
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
//    int n,m ,q;
//       int c[100000];
//    bool ind[100000];
//        int a[100000],b[100000];
//    cin>>n>>m;
//
//    for(int i=0;i<m;i++){
//        cin>>a[i]>>b[i];
//    }
//    cin>>q;
// 
//    memset(ind,true,sizeof(ind));
//    for(int i=0;i<q;i++){
//        cin>>c[i];
//        ind[--c[i]]=false;
//    }
//    for(int i=0;i<n;i++){
//        parent[i]=i;
//        rank[i]=0;
//    }
//    compscnt=n;
//    
//    for(int i=0;i<m;i++){
//        if(!ind[i]) continue;
//        Union(a[i],b[i]);
// 
//    }
//        int ret[q];
//    for(int i=q-1;i>=0;i--){
//        ret[i]=compscnt;
//        Union(a[c[i]],b[c[i]]);
//    }
//        
//         cout<<ret[0]<<" ";
//        for(int i=1;i<q;i++){
//            cout<<ret[i]<<" ";
//        }
//        
//    return 0;
//}
//
//LinkList* insert(int x,LinkList* head){
//    LinkList* temp=new LinkList();
//    temp->data=x;
//    temp->next=head;
//   
//    head=temp;
//    
//}
//
// 
//
//void print(LinkList* head){
//    LinkList* temp=head;
//    while (temp!=NULL) {
//        cout<<temp->data<<" ";
//        temp=temp->next;
//    }
//    cout<<"\n";
//}
//
////int main() {
//    anansi();
//} 