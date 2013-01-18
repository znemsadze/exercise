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

struct Plate {
    int id;
    int a;
    int b;
    int parentId;
    int color;
} plate;
 

int getRirghtPlate(){
    
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
   int k,kk=0,a,b;
   cin>>k;
   vector< vector<Plate> > vct(0,vector<Plate>(0));
   for(int i=0;i<k;i++){
       cin>>plate.a>>plate.b;plate.id=i;plate.color=0;
       vct.push_back(  vector<Plate>(0));
       vct[i].push_back(plate);
       for(int j=0; j<vct.size()-1;j++){
           if((vct[j][0].a==plate.a)||(vct[j][0].b==plate.a)){vct[j].push_back(plate);}
           if((vct[j][0].a==plate.a)||(vct[j][0].a==plate.b)){vct[i].push_back(vct[j][0]);}
       }
   }
   int mynum ;
   Plate myplate;
   cin>>mynum>>myplate.a>>myplate.b;
   myplate.id=k;myplate.parentId=-1;myplate.color=0;
   vct.push_back(  vector<Plate>(0));vct[k].push_back(myplate);
     for(int j=0; j<vct.size()-1;j++){
           if((vct[j][0].a==myplate.a)||(vct[j][0].b==myplate.a)){vct[j].push_back(myplate);}
           if((vct[j][0].a==myplate.a)||(vct[j][0].a==myplate.b)){vct[k].push_back(vct[j][0]);}
       }
   
   
   queue<Plate> bfwin;
   Plate tp,tp1,tp2;vector<Plate> result(0);
   bfwin.push(vct[k][0]);int tt;vct[k][0].color=1;
   
   while(true){
    if (bfwin.size()==0)break;   
    tp=bfwin.front();bfwin.pop();tt=0;
    if((tp.b==mynum)){ 
                    while(true){
                           if(tp.parentId!=-1){
                                
                            result.push_back(tp);
                             
                             tp1=vct[tp.parentId][0];
                             tp=tp1;
                            }
                           else{break;}
                        }
    break;
    }
    for(int i=0;i<vct[tp.id].size();i++){
        for(int j=0;j<vct.size();j++){
            
        if((vct[tp.id][i].id==vct[j][0].id)&&(vct[j][0].color==0)){     
        vct[j][0].color=1;
        vct[j][0].parentId=tp.id;
        bfwin.push(vct[j][i]);break;
        }
        }
    }
    
   }
   
   
   if(result.size()==0){
       cout<<"IMPOSSIBLE"<<"\n";
   }else{cout<<result.size()<<"\n";
       for(int i=0; i<result.size();i++){
           cout<<result[result.size()-i-1].id+1<<"\n";
       }
   }
//   for(int i=0;i<vct.size();i++){
//       for(int j=0;j<vct[i].size();j++){
//           cout<<vct[i][j].id<<"-"<<vct[i][j].parentId<<" ";
//       }
//       cout<<"\n";
//   }
   return 0;
} 

int main() {
    int k=getRirghtPlate();
   return 0;
}

