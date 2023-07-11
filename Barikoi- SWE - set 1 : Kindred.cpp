#include<bits/stdc++.h>
using namespace std;

int main() {
  int numberOfRound;
  cin >> numberOfRound;
  while(numberOfRound-- > 0){
    int rangeOfEachRound;
    cin >> rangeOfEachRound;

    long long sumOfSequence = rangeOfEachRound*(rangeOfEachRound + 1LL) / 2LL;
    long long numberOfPower = log2(rangeOfEachRound) + 1;
    long long sumOf2OfPower = pow(2, numberOfPower) - 1;
    
    long long restsumOfPower = sumOfSequence - sumOf2OfPower;
    
    long long totalSumRange = restsumOfPower - sumOf2OfPower;
      
    cout << totalSumRange << "\n";
    
  }
  return 0;
}
