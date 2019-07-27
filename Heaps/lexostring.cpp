#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int k;
  cin >> k;
  priority_queue<char,vector<char>,greater<char>> q;
  int i;
  for(i=0;i<k-1;i++){
    q.push(s[i]);
  }
  string ans="";
  while(i<s.length()){
    q.push(s[i]);
    char temp=q.top();
    q.pop();
    ans+=temp;
    i++;
  }
  while(!q.empty()){
    ans+=q.top();
    q.pop();
  }
  cout << ans << endl;
}
