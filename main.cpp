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
} plate;
 

int getRirghtPlate(){
    
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
   int k,kk=0,a,b;
   cin>>k;
   vector< vector<Plate> > vct(0,vector<Plate>(0));
   for(int i=0;i<k;i++){
       cin>>plate.a>>plate.b;plate.id=i;
       vct.push_back(  vector<Plate>(0));
       vct[i].push_back(plate);
       for(int j=0; j<vct.size()-1;j++){
           if(vct[j][0].a==plate.b){vct[j].push_back(plate);}
           if(vct[j][0].b==plate.a){vct[i].push_back(vct[j][0]);}
       }
   }
   int mynum ;
   Plate myplate;
   cin>>mynum>>myplate.a>>myplate.b;
   myplate.id=0;
   
   
   
   queue<Plate> bfwin;
   bfwin.push(myplate);
   while(true){
       
   
   
   }
   
 
   return 0;
} 

 


int main() {
    int k=getRirghtPlate();
   return 0;
}


