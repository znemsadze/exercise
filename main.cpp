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

/*
 * 
 */

struct Route {
    int id;
    int collor;
} route;

int meeting(){
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
   vector< vector<Route> > vct(0,vector<Route>(0));
   vector<int> tmp(0);
   Route r;
   int n,m,l,p=0,kk=0,v,ind;
   cin>>n;cin>>m;
   for(int i=0;i<m;i++){
       cin>>l;tmp.clear();
       for(int j=0;i<l;j++){
           cin>>v;
           tmp.push_back(v);
       }
       for(int j=0;j<l;j++){ ind =0;
       for(int k=0;k<kk;k++){ 
           if(vct[k][0].id==tmp(j)){ ind =1;
                                     for(int jj=0;jj<l;jj++)
                                        {
                                         if(jj!=j){ r.id=tmp;r.collor=0; vct[k].push_back(r);}
                                        }
                                     }             
         }
          if(ind==0){kk++;
              vct.push_back(vector<Route>(0));
              vct[kk].push_back(tmp(j));
                                    for(int jj=0;jj<l;jj++)
                                        {
                                         if(jj!=j){ r.id=tmp;r.collor=0; vct[kk].push_back(r);}
                                        }         
          }
       }
   }
   
   
   for(int i=0;i<vct.size();i++){
       
   
   }

} 

 


int main() {
       
    Grafs gr=Grafs();
    int k=gr.isenbaev();
 
   return 0;
}



