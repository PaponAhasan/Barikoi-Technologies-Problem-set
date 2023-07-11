#include "bits/stdc++.h"
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while(tc--){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    if(s[n - 1] != '1'){
      for(int i = n - 1; i >= 0; i--){
        if(s[i] == '1' && k >= n - i - 1){
          swap(s[i], s[n - 1]);
          k -= (n - i - 1);
          break;
        }
      }
    }
    
    if(s[0] != '1'){
      for(int i = 0; i < n - 1; i++){
        if(s[i] == '1' && k >= i){
          swap(s[i], s[0]);
          break;
        }
      }
    }
    
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
      string num = to_string(s[i] - '0') + to_string(s[i + 1] - '0');
      sum += stoi(num);
    }
    cout << sum << '\n';
  }
}
