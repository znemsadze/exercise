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

struct Puarter{
      long double dist;
    int vzt;
    int wgh;
    
    
};
struct Diag{
    int x;
    int y;
};


int Metro(){
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
    int n,m,k,x,y;

    cin>>n>>m;
    Puarter vct[1002][2];
    Diag dg[100];int mxdist=n*m*100+1;
    for(int i=0;i<=m;i++){
         
            vct[i][0].dist=mxdist;
             vct[i][1].dist=mxdist;
            vct[i][0].wgh=0;
            vct[i][0].vzt=0;
        
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>dg[i].x>>dg[i].y;
       }
 vct[0][0].dist=0;
 int nn=0;
 while(nn<n){nn++;
    for(int i=0;i<=m;i++)
    {
         if(vct[i+1][0].dist>(vct[i][0].dist+100)){
                vct[i+1][0].dist=vct[i][0].dist+100;
            }
         if(vct[i][1].dist>(vct[i][0].dist+100)){
                vct[i][1].dist=vct[i][0].dist+100;
            }

         for(int j=0;j<k;j++){
             if((dg[j].y==(i+1))&&(dg[j].x==nn)){
                if(vct[i+1][1].dist>(vct[i][0].dist+sqrt(20000.0))){
                    vct[i+1][1].dist=vct[i][0].dist+sqrt(20000.0);
                }
             }
         }
     }
 if(nn<n){
 for(int i=0;i<=m;i++){
   vct[i][0].dist=vct[i][1].dist;
   vct[i][1].dist=mxdist;
 }
 }
 
   }    
         if(vct[m][1].dist>(vct[m][0].dist+100)){
                vct[m][1].dist=(vct[m][0].dist+100);
            }
            if(vct[m][1].dist>(vct[m-1][1].dist+100)){
                vct[m][1].dist=vct[m-1][1].dist+100;
            }
    
    cout<<(long)(vct[m][1].dist+0.5);
    return 0;
 } 

int main() {
    int k=Metro();
   return 0;
}






