
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

struct Subj {
    long value;
    int color;
};

int topologicalSorting() {
    freopen("input.txt", "rt", stdin);
    long n, m, s, u;
    cin >> n>>m;
    vector<vector<Subj> > subjects(0, vector<Subj>(0));

    for (long i = 0; i < n; i++) {
        subjects.push_back(vector<Subj>(0));Subj isub;isub.value=i+1;isub.color=0; 
        subjects[subjects.size() - 1].push_back(isub);
    }

    for (long i = 0; i < m; i++) {
        cin >> s>>u;Subj ssub;ssub.color=0;ssub.value=s;
        subjects[u - 1].push_back(ssub);
    }
 
 
    
    int ind[1001];
 memset(ind,0,sizeof(ind));
    
 queue<Subj> que;int color1=0;Subj front;
    for(int i=0;i<n;i++){
        cin>>s;
        ind[s]=1;color1=i+1;
        que.push(subjects[s-1][0]);subjects[s-1][0].color=color1;
        while(!que.empty()){
            front=que.front();
            for(int j=0;j<subjects[front.value-1].size();j++){
                if(subjects[ subjects[front.value-1][j].value-1][0].color<color1){
                subjects[ subjects[front.value-1][j].value-1][0].color=color1;
                que.push(subjects[front.value-1][j]);
                if(ind[subjects[front.value-1][j].value]!=1 ){
                    cout<<"NO";
                    return 0;
                }
                }
                
            }
            que.pop();
        }
        
        
    }
        cout<<"YES";
                
 
 
 
 
 
    return 0;

}

//int main() {
//    topologicalSorting();
//    
//}