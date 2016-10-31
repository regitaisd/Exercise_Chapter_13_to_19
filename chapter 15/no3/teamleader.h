#ifndef teamleader_h
#define teamleader_h
#include <string>
using namespace std;

class productionWorker{
	private:
		int hr;
		double hourlyPay;
	public:
		productionWorker();
		productionWorker(int hr, double pay);
		int getHr();
		double getPay();
		void setHr(int hr);
		void setPay(double pay);
};

class teamLeader:public productionWorker{
	protected:
		double bonus;
		int minTraining;
		int training;
	public:
		teamLeader();
		teamLeader(int, double, double, int, int);
		double getBonus();
		int getMin();
		int getTraining();
		void setBonus(double bonus);
		void setMin(int minTraining);
		void setTraining(int training);
};

#endif
