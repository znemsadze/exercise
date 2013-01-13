/* 
 * File:   Grafs.cpp
 * Author: zcviad
 * 
 * Created on January 8, 2013, 10:07 PM
 */

#include "Grafs.h"
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
//#include "eolimp/Solved.h"
 

using namespace std;



Grafs::Grafs() {
}

Grafs::Grafs(const Grafs& orig) {
}

Grafs::~Grafs() {
}

int Grafs::isenbaev(){

 freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
     vector< vector<string> > vct(0,vector<string>(0));
     int n;string tmp1="";string tmp2="";string tmp3="";
     cin>>n;int kk=0;int ind1=0 ,ind2=0,ind3=0;
     for(int i=0;i<n;i++){
         cin>>tmp1;
                 cin>>tmp2;cin>>tmp3; 
         ind1=0;ind2=0;ind3=0;
         for(int i=0;i<kk;i++){
              
             if(vct[i][0]==tmp1){ind1=1;vct[i].push_back(tmp2);vct[i].push_back(tmp3);}
             if(vct[i][0]==tmp2){ind2=1;vct[i].push_back(tmp1);vct[i].push_back(tmp3);}
             if(vct[i][0]==tmp3){ind3=1;vct[i].push_back(tmp1);vct[i].push_back(tmp2);}

         }
         if(ind1==0){kk++;vct.push_back(vector<string>(0) );vct[kk-1].push_back(tmp1);
                                        vct[kk-1].push_back(tmp2);vct[kk-1].push_back(tmp3);}
         if(ind2==0){kk++;vct.push_back(vector<string>(0) );vct[kk-1].push_back(tmp2);
                                        vct[kk-1].push_back(tmp1);vct[kk-1].push_back(tmp3); }
         if(ind3==0){kk++;vct.push_back(vector<string>(0) );vct[kk-1].push_back(tmp3);
                                        vct[kk-1].push_back(tmp1);vct[kk-1].push_back(tmp2);}
     }
     
     vector<string> res;
     
     int rang[1000];
     for(int i=0;i<kk;i++){
         res.push_back(vct[i][0]);
         rang[i]=-1;
     }
     sort(res.begin(),res.end(),less<string>());
     
     
     vector<string> tmpv;vector<string>tmpv1;
     
     tmpv.push_back("Isenbaev");int rn=0;
     while(true){
     for(int i=0;i<tmpv.size();i++){
          for(int j=0;j<kk;j++){
              if(res[j]==tmpv[i]){
                  if(rang[j]==-1)
             rang[j]=rn;
         }  
          }
     for(int j=0;j<vct.size();j++){
       
         if(vct[j][0]==tmpv[i]){
             for(int k=1;k<vct[j].size();k++){
                 tmpv1.push_back(vct[j][k]);
             }
             vct.erase(vct.begin()+j);
          }
         
     }

     
     } rn++;
     tmpv=tmpv1;
     if(tmpv1.size()==0){break;}
     tmpv1.clear();
     
          
     }
     for(int i=0;i<kk;i++){
         cout<<res[i]<<" ";((rang[i]==-1)? cout<<"undefined" :cout<<rang[i]) ;cout<<"\n";
     }
     
    
     return 0;

}


