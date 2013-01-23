/* 
 * File:   main.cpp
 * Author: zviad
 *
 * Created on December 5, 2012, 12:08 AM
 */

#include <cstdlib>
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

struct Edge{
    int s;
    int d;
    float rate;
    float comis;
    
    
};
struct Vert{
    int id;
    int dest;
};


int currencyExchange(){
     freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
    int n,s,m,kk=0,ind; Edge edges[201];
    float v;Vert verts[101];
    cin>>n>>m>>s>>v;
    for(int i=0;i<m;i++ ){
        cin>>edges[2*i].s>>edges[2*i].d>>edges[2*i].rate
           >>edges[2*i].comis>>edges[2*i+1].rate>>edges[2*i+1].comis;
        edges[2*i+1].s=edges[2*i].d;
        edges[2*i+1].d=edges[2*i].s;
        ind=0;
        for(int j=0;j<kk;j++){
            if(verts[j].id==edges[2*i].d){ind=ind+1; }
            if(verts[j].id==edges[2*i].s){ind=ind+2; }
            if(ind==3){break;}
        }
        if(ind==0){verts[kk].id=  edges[2*i].d;kk++; verts[kk].id=  edges[2*i].s;kk++; }
        if(ind==1){verts[kk].id=  edges[2*i].d;kk++; }
        if(ind==2){verts[kk].id=  edges[2*i].s;kk++; }
    }
    
    for(int i=0;i<kk;i++){
        if(verts[i].id==s){
            verts[i].dest=v;
        }
        else
        {verts[i].dest=0;}
        
        
        
    }
        
    for(int i=0; i<kk;i++){
        for(int j=0;j<m;j++)
        {
            if((verts[edges[j].s].dest>0)&&((verts[edges[j].d].dest==0)||
               (verts[edges[j].d].dest<((verts[edges[j].s].dest-edges[j].comis)*edges[j].rate))
                    )){
                verts[edges[j].d].dest=((verts[edges[j].s].dest-edges[j].comis)*edges[j].rate);
                if(verts[edges[j].d].dest<0){
                  verts[edges[j].d].dest=0;
                }
            }
        }
    }
    
     ind=0;
        for(int j=0;j<m;j++)
        {
            if((verts[edges[j].s].dest>0)&&((verts[edges[j].d].dest==0)||
               (verts[edges[j].d].dest<((verts[edges[j].s].dest-edges[j].comis)*edges[j].rate))
                    )){
                
                verts[edges[j].d].dest=((verts[edges[j].s].dest-edges[j].comis)*edges[j].rate);
                if(verts[edges[j].d].dest<0){
                  verts[edges[j].d].dest=0;
                }else{ind=1 ;break;}
            }
        }
     string res=(ind==0)?"NO":"YES";
   cout<<res;
 } 

int main() {
    int k=currencyExchange();
   return 0;
}






