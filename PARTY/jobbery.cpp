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
#include <stack>
 

using namespace std;

 

int jobbery() {
       vector<vector<short  > > senators(0, vector<short  >(0));
   vector< vector<short  > > reversed(0, vector<short  >(0));
    freopen("input.txt", "rt", stdin);
      short n, x, y;

//     scanf("%d", &n);
 
   
 
    vector<short  > color(0);
     for (short   i = 0; i < n; i++) {
         color.push_back(0);
      
        senators.push_back(vector<short  >(0));
        senators[senators.size() - 1].push_back(i + 1);
//         scanf("%d", &x);
        
        while (x != 0) {
             
            senators[senators.size() - 1].push_back(x);
//             scanf("%d", &x);
            
        }

    }


   

    stack<short  > stack1;
    stack<short  > s;
    short   front;
 
  


    for (short   i = 0; i < n; i++) {

        if (color[i] == 0) {
            
                    
        stack1.push(senators[i][0]); color[i]=1;front=senators[i][0];
            while (!stack1.empty()) {
               
                for (short   j = 1; j < senators[front - 1].size(); j++) {
                    if (color[senators[front - 1][j]  - 1] <1 ) {
                        stack1.push(senators[front - 1][j]);
                        color[senators[front - 1][j]  - 1] = 1;
                    }
                }
                 front = stack1.top();
                 s.push( stack1.top());
                stack1.pop();
            }
 
        }
       
    }


    
    
  
    for (short   i = 0; i < n; i++) {
        reversed.push_back(vector<short  >(0));
        color[i]=0;
        reversed[i].push_back(i+1);
    }

    for (short   i = 0; i < n; i++) {
        for (short   j = 1; j < senators[i].size(); j++) {
            reversed[senators[i][j] - 1].push_back(senators[i][0]);
        }
    }
    senators.clear();
    

    short   color1=0;
    while (!s.empty()) {
        front = s.top(); 
        if ( color[front  - 1] == 0) {
            color1++;
            //vector<short int> comp(0);
            //comp.push_back(front.value);
            stack1.push(front);
              color[front  - 1] = color1;
            while ((!stack1.empty()) && (!s.empty())) {
                for (short   j = 1; j < reversed[front  - 1].size(); j++) {
                    if ( color[reversed[front  - 1][j]  - 1] == 0) {
                        
                        color[reversed[front  - 1][j]  - 1] = color1;
                        
                        
                        stack1.push(reversed[front  - 1][j]);
                        //comp.push_back(reversed[front.value - 1][j].value);
                    }
                }
                 front = stack1.top();
                stack1.pop();
            }
           // components.push_back(comp);
        }
        s.pop();
    }
   
    short   ind[2001];
    for(short   i=0;i<color1;i++){
        ind[i]=0;
    }
    
    
 
    
    for (short   i = 0; i < reversed.size(); i++) {
        for (short   j = 1; j < reversed[i].size(); j++) {
            if( color[reversed[i][j] -1]  !=color[i]){
                ind[color[i]-1]=-1;
                break;
            }
        }
        
    }
 
    short   k1=0,ind2;
    for(short   i=0;i<color1;i++){
        if(ind[i]==0){
            k1++;ind2=i;
        }
    }
    vector<short > result;
    if(k1==1) {
        
        for(short   i=0;i<n;i++){
            if(color[i]==(ind2+1)){
                result.push_back(reversed[i][0] );
            }
        }
        
        sort(result.begin(),result.end());
        for(short   j=0;j<result.size();j++){
         cout<<result[j]<<" ";
         
        }
        
    }
     cout<<0;
    
    return 0;
}

 