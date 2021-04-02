#include "EfficientTruckLoads.h"

EfficientTruckloads::EfficientTruckloads() {
	count = 0;
}

int EfficientTruckloads::numTrucks(int n1, int n2) {
    if (count == 0) {
        if ( (n1 < 2 || n1 > 10000) || (n2 < 1 || n2 > n1 - 1) ) {
            return -1;
        }
        count++;
    }
    
    if (dp[n1] != 0) return dp[n1];

    if (n1 <= n2) {
        dp[n1] = 1;
        return dp[n1];
    }

    if (n1 % 2 == 0) {
        dp[n1] = 2*numTrucks(n1/2, n2);
        return dp[n1];
    }
    else {
        dp[n1] = numTrucks(n1/2, n2) + numTrucks(n1/2+1, n2);;
        return dp[n1];
    }
}
