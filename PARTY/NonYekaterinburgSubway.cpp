/* 
 * File:   main.cpp
 * Author: zviad
 *

 */

#include <cstdlib>
#include <math.h>
#include<stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

struct Island{
    long id;
    long ind;
    long color;
};  

struct Bridge{
    long p1;
    long p2;
};

vector< vector<Island> > islands(0, vector<Island>(0));

int color=0;

long findInd(long x){

    for(long i=0;i<islands.size();i++){
        if(islands[i][0].id==x){
            return i;
        }
    }
}

int unionGroup(int p1 ){
       
    queue<Island> que;long find=0,find1=0;
    Island f; 
    for(int i=0;i<islands.size();i++){
        if(p1==islands[i][0].id){color++;
            islands[i][0].color=color;
            que.push(islands[i][0]);break;
        }
        
    }
    while (!que.empty()) {
       f= que.front();  
       que.pop();find=findInd(f.id);
       for(long i=1; i< islands[find].size();i++){
           find1=findInd(islands[find][i].id);
           if(islands[find1][0].color==0){
               islands[find1][0].color=color;
           que.push(islands[find1][0]);
           }
       }
       
    }
    return 0;
}

int ekaterinburgubWay(){
    freopen("input.txt", "rt", stdin);
    long n ,k,m,x,y;int isx,isy;
    cin>>n>>k>>m;
    Island isl;vector<Bridge> bridges;Bridge bridge;
    
    for(long i=0;i<n;i++){
     islands.push_back(vector<Island>(0));
       isl.id=i+1;isl.color=0;
       islands[islands.size() -1].push_back(isl);
    }
            
    for(long i=0;i<k;i++){
        cin>>x>>y;isx=0;isy=0;
        for(long j=0;j<islands.size();j++){
            if(x==islands[j][0].id){
                isx=1;isl.id=y;isl.color=0;
                islands[j].push_back(isl);
            }
            if(y==islands[j][0].id){
                isy=1;isl.id=x;isl.color=0;
                islands[j].push_back(isl);
            }
            if(isx==1&&isy==1){
                break;
            }
        }
    }
    
    
//    for(long i=0;i<n;i++){
//        for(long j=0;j<islands[i].size();j++){
//            cout<<islands[i][j].id<<" ";
//        }
//        cout<<"\n";
//    }
 
    for(long i=0;i<islands.size();i++){
        if(islands[i][0].color==0){
        unionGroup(islands[i][0].id);
        }
    
    }
    
//    for(long i=0;i<islands.size();i++){
//        cout<<islands[i][0].id<<" "<<islands[i][0].color<<"\n";
//    }
//    
    color--;
    cout<< color;
    
  
}
 


//int main() {
//
//    
//ekaterinburgubWay();
//
//}