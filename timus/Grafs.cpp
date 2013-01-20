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
#include <queue>
#include <algorithm>
//#include "eolimp/Solved.h"
 

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
struct Plate {
    int id;
    int a;
    int b;
    int parentId;
    int color;
} plate;
 struct Puarter{
      long double dist;
    int vzt;
    int wgh;
    
    
};
struct Diag{
    int x;
    int y;
};
Grafs::Grafs() {
}

Grafs::Grafs(const Grafs& orig) {
}

Grafs::~Grafs() {
}
//unresolved
int Grafs::meeting(){

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
   int rt=0;
   for (int i=0;i<p-1;i++){
       if(persons[i].v==persons[i+1].v){rt++;}
   }
   if(rt==p){cout<<persons[0].v<<" "<<0<<endl;return 0;}
   if(p==1){cout<<persons[0].v<<" "<<0<<endl;return 0;}
   
   
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

int Grafs::rightPlate(){
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
                bfwin.push(vct[j][0]);break;
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
 return 0;

}

int Grafs::metro(){
   int n,m,k,x,y;

    cin>>n>>m;
    Puarter vct[1002][2];
    Diag dg[100];int mxdist=n*m*1000+1;
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
 while(nn<=n){nn++;
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
                break;
             }
         }
     }
 if(nn<=n){
 for(int i=0;i<=m;i++){
   vct[i][0].dist=vct[i][1].dist;
   vct[i][1].dist=mxdist;
 }
 }
 
   }    
 
            

    
    cout<<(long)(vct[m][0].dist+0.5);
    return 0;
}
