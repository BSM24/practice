#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    string lines[200];
    //vector<string> lines;
    printf("Enter the values of n and q\n");
    scanf("%d %d", &n,&q);
    //scanf("%d",&n);
    for(int i = 0; i < n; i++){
        string temp;
            printf("Enter the line\n");
            getline(cin >> ws,lines[i]);
            cout << ">" << lines[i] <<endl;
    }
    string tagname;
    cout << lines[0];
    stringstream ss(lines[0]);
    

    return 0;
}
