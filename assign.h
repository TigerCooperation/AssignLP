#ifndef ASSIGN_H
#define ASSIGN_H
#include <string>
#include <iostream>
using namespace std;

class assign {
    private:
	int nusr;
	int nmsg;
	int ns;
	int nm;

        double lambda;
	double gamma;

	double *score;
	double *target;
	double *x0;

	string fileName;

    public:

        assign (string fileName, int n, int m);

	void init ();
	void free ();
        void UpdateX (double *x);
        void GetX (double *x);

        void readtext_usr_msg_score (int maxNusr, int maxNmsg);

        void forward(double *y, double *x);
        void adjoint(double *y, double *x);
        void op(double *y, double *x);

        void residual(double *y, double *x);
        void maxres(double *r1, double *r2, double *x);

        void round(double *y, double *x);
        void flow(double *y, double *x);
        double entropy(double *x, int n);
        double yield(double *x);
        double misfit(double *x);

        void printResult(string outputFileName);
}
;


#endif
