#include "TruckLoads.h"

Truckloads::Truckloads() {
	
}

int count = 0;

int Truckloads::numTrucks(int n1, int n2) {

	if (count == 0) {
		if ( (n1 < 2 || n1 > 10000) || (n2 < 1 || n2 > n1 - 1) ) {
			return -1;
		}
		count++;
	}

	if (n1 <= n2) 
		return 1;

	if (n1 % 2 == 0) return 2*numTrucks(n1/2, n2);

	else return numTrucks(n1/2, n2) + numTrucks(n1/2+1, n2);

}
