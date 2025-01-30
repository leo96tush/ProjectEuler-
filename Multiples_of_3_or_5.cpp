#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long unsigned int a,b,c;
        a = (n-1)/3;
        b = (n-1)/5;
        c = (n-1)/15;
        long long unsigned int sum = 0;
        sum = sum + (0.5*a*(a+1)*3)+(0.5*b*(b+1)*5)-(0.5*c*(c+1)*15);
        cout << sum << endl;
    }
    return 0;
}
