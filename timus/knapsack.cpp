/* 
 * File:   knapsack.cpp
 * Author: zviad
 * 
 * Created on March 2, 2013, 5:20 PM
 */

#include "knapsack.h"

knapsack::knapsack() {
}

knapsack::knapsack(const knapsack& orig) {
}

knapsack::~knapsack() {
}

//------subset sum--------------------
knapsack::subset(){
  vector<bool> ndx(100010);
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
    int t;int n;long long x=0; 
    cin>>t;long long sum;
    sum=0;
 
 for(int i=0;i<t;i++){
        sum=0;
     cin>>n;
     for(int j=0;j<n;j++){
         cin>>x;
         for(long long k=n*1000l;k>=0l;k--){
            if(ndx[k]){
                  ndx[k+x]=true;
             }
         }
          
         ndx[x]=true;
         
     }    
     
     for(long long j=0l;j<=n*1000l;j++){
         if(ndx[j]==true){
             sum+=j;
         }
         ndx[j]=false;
     }
     
    
      cout<<sum<<endl;   
        
        
    }
     
    
}
