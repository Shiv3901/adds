#include "EfficientTruckLoads.h"

EfficientTruckloads::EfficientTruckloads() {
	count = 0;
    for (int i = 0 ; i < 10001 ; i++) {
        dp[i] = 0;
    }
}

int EfficientTruckloads::numTrucks(int n1, int n2) {
    
    if ( (n1 < 1 ) || (n2 < 1) ) {
        return 0;
    }
    
    if (dp[n1] != 0) return dp[n1];

    if (n1 <= n2) {
        dp[n1] = 1;
        return dp[n1];
    }

    if (n1 % 2 == 0) {
        dp[n1] = 2 *  numTrucks(n1/2, n2);
        return dp[n1];
    }
    else {
        dp[n1] = numTrucks(n1/2, n2) + numTrucks(n1/2+1, n2);;
        return dp[n1];
    }
}
