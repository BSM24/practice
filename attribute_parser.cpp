#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    string lines[200];
    printf("Enter the values of n and q\n");
    //scanf("%d %d", &n,&q);
    cin >> n;
    cin >> q;
    cin >> ws;
    for(int i = 1; i <= n; i++){
            printf("Enter the line\n");
            getline(cin,lines[i-1]);
            cout << ">" << lines[i-1] <<endl;
    }


    return 0;
}
