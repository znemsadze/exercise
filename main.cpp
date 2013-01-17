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

struct Route {
    int id;
    int collor;
    int rang;
    int ndx;
} route;
struct Person{
    int money;
    int v;
    int card;
    long long loss;
    int put;
}person;

int meeting(){
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
   vector< vector<Route> > vct(0,vector<Route>(0));
   vector<int> tmp(0);
   Route r;
   long long n,m,l,p=0,kk=0,v,ind;
   cin>>n;cin>>m;
   for(int i=0;i<m;i++){
       cin>>l;tmp.clear();
       for(int j=0;j<l;j++){
           cin>>v;
           tmp.push_back(v);
       }
       for(int j=0;j<l;j++){ ind =0;
       for(int k=0;k<kk;k++){ 
           if(vct[k][0].id==tmp[j]){ ind =1;
                                     for(int jj=0;jj<j;jj++)
                                        {
                                          r.id=tmp[jj];r.collor=0;r.rang=0; vct[k].push_back(r);
                                        }
                                     }             
         }
          if(ind==0){kk++;
              vct.push_back(vector<Route>(0));
               r.id=tmp[j];r.collor=0;r.rang=0;r.ndx=kk-1;
               vct[kk-1].push_back(r);
                                    for(int jj=0;jj<j;jj++)
                                        {
                                          r.id=tmp[jj];r.collor=0;
                                                    r.rang=0; vct[kk-1].push_back(r);
                                        }         
          }
       }
   }
   
 
   
   cin>>p;
   vector<Person> persons(0);
   for (int i=0;i<p;i++){
       cin>>person.money>>person.v>>person.card;
       person.put=0;
       persons.push_back(person); 
   }
   
   queue<Route> queue;

   long long  cl=0,nd,ndc,min=persons.size()*1008,rmin=0,ndp=0;
   

   for (int i=0;i<vct.size();i++){
       vct[i][0].rang=0;
       
       vct[i][0].collor=cl+1;
       queue.push(vct[i][0]);  nd=1;ndc=0;
       //nd||(ndc==persons.size()
       while(true){
           if(queue.size()==0)break;
                
           r=queue.front();queue.pop();
         
                for(int j=0;j<persons.size();j++){
                    if(persons[j].v==r.id){ndc++;
                    persons[j].loss=r.rang *4;
                    persons[j].put=1;
//                    if((persons[j].loss>persons[j].money)&&
//                        (persons[j].card!=1)){nd=0;break;}
                     
                    }
                }
                
                 
                      
                     for(int k=1;k<vct[r.ndx].size();k++){
                            for(int j=0;j<vct.size();j++){ 

                             if(vct[r.ndx][k].id==vct[j][0].id){
                                if(vct[j][0].collor<=cl){   
                                    vct[j][0].collor=cl+1;
                                    vct[j][0].rang=r.rang+1;
                                    queue.push(vct[j][0]);break;
                                }
                               }
                            }
                       }
                     
         }
       ndp=0;
    for(int j=0;j<persons.size();j++){
        if(((persons[j].loss>persons[j].money)&&
                (persons[j].card!=1))||(persons[j].put==0)){
            ndp=-1;break;
        }
       
        ndp=ndp+((persons[j].card==1)?0:persons[j].loss);
    }  
     
       if((ndp>-1)&&(ndp<=min)){
           if(ndp==min){
               if(vct[i][0].id<rmin){rmin=vct[i][0].id;}
           }else{
           min=ndp;
           rmin=vct[i][0].id;}
       }
         for(int j=0;j<persons.size();j++){
             persons[j].put=0;persons[j].loss=0;
       } 
//       for(int j=0;j<vct.size();j++){
//           for(int k=0;k<vct[j].size();k++){
//               cout<<vct[j][k].id<<" "<<vct[j][k].rang<<" "<<vct[j][k].ndx<<" | ";
//           }
//           cout<<"\n";
//       }
              
       cl++;
   }
   
   
   if(rmin==0){
         printf("%d", 0);
      // cout << 0 << endl;
   }else{
       cout << rmin << " " << min << endl;
   }

   
//   for(int i=0;i<persons.size();i++){
//       cout<<persons[i].money<<" "<<persons[i].v<<" "<<persons[i].loss<<" "<<persons[i].put;
//       cout<<"\n";
//   }
   return 0;
} 

 


int main() {
    int k=meeting();
   return 0;
}



