#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--){
	    int n;
	    cin >> n;
	    vector<int>ar(n);
	    for(auto& i : ar) cin >> i;

	    int i = 0, j = n - 1;
    	for(i = 0; i < n - 1; i++){
    	    if(ar[i] > ar[i + 1]) break;
    	}

    	for(j = n - 1; j > i; j--){
    	    if(ar[j] > ar[j - 1]) break;
    	}
    	    
    	//cout << i << " " << j << "\n";
    	if(i == j) printf("YES\n");
    	else printf("NO\n");
	}
	return 0;
}
