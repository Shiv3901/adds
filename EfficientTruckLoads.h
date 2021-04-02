#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

class EfficientTruckloads {

	private:
		int count;
		int dp[10001];

	public:
		EfficientTruckloads();
		int numTrucks(int n1, int n2);

};

#endif

