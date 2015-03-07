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

struct El{
    int id;
    int collor;
} el;



 

int trnsportation() {
    vector< vector<El> > vct(0, vector<El>(0));
   
    freopen("input.txt", "rt", stdin);
    long n, t,x;
    cin>>n>>t;
    
    for(long i=0;i<n;i++)
    {
        vct.push_back(vector<El>(0));
        El el;el.collor=0;el.id=i+1;
        vct[i].push_back(el);
    }
    for(long i=0;i<n-1;i++){
        cin>>x;
        El el;el.collor=0;el.id=(i+x+1);
        vct[i].push_back(el);
    }
    
    queue<El> que;
    que.push(vct[0][0]); vct[0][0].collor=1;
     
           
        for(long i=1;i<vct[0].size();i++){
            que.push(vct[0][i]);
        }
      
    while(!que.empty()){
        El  el1=que.front();que.pop();
        if(el1.id==t){
            cout<<"YES";
            return 0;
        }
        if(vct[el1.id-1][0].collor==0){
            vct[el1.id-1][0].collor=1;
        for(long i=1;i<vct[el1.id-1].size();i++){
            que.push(vct[el1.id-1][i]);
        }
        }
        
       
    }
    cout<<"NO";
    
    
    
}