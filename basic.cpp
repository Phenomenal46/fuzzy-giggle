#include<iostream>
#include<vector>
using namespace std;
vector<int>memo;
//function to calculate nth Fibonacci number using memoization
//Time Complexity: O(n)
int f(int n){
    if(n<=1){return n;}
    if(memo[n] != -1) return memo[n];
    memo[n] = f(n-1) + f(n-2);
    return memo[n];
}
int main() {
    memo.resize(100, -1);
    cout<<f(20)<<endl;
    return 0;
}