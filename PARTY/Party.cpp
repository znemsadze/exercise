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

struct Emp {
    int id;
    int collor;
} emp;

vector< vector<Emp> > vct(0, vector<Emp>(0));



int  getDepth(int rootId  ) {
 
    queue<Emp> que;
    Emp em;
    em.id=rootId;
    em.collor = 0;
    que.push(em);
    Emp e = em;
    while (!que.empty()) {
        e = que.front();
        que.pop();
        for (int i = 1; i < vct[e.id - 1].size(); i++) {
            Emp e1 = vct[e.id - 1][i];
            e1.collor = e.collor + 1;
            que.push(e1);
        }
    }
    return e.collor;


}

int  party(){
    
    
    vector< vector<Emp> > vct(0, vector<Emp>(0));


   freopen("input.txt", "rt", stdin);
    int n, x;
    cin>>n;


    for (int i = 0; i < n; i++) {
        vct.push_back(vector<Emp>(0));
        emp.collor = 0;
        emp.id = (i + 1);
        vct[i].push_back(emp);
    }
    for (int i = 0; i < n; i++) {
        cin>>x;
        if (x != -1) {
            emp.collor = 0;
            emp.id = (i + 1);
            vct[x - 1].push_back(emp);
        }
    }

    int max = 0, dpth = 0;
    for (int i = 0; i < n; i++) {
         
            dpth = getDepth(vct[i][0].id);
            if(dpth > max) {
                max = dpth;
            }
        
    }
    max++;
    cout << max;
}
