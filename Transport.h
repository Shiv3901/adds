#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport {

	protected:
		int travelledDist;

	public:
		Transport();
		int get_dist_travelled();
		virtual void go() = 0;

};

#endif

