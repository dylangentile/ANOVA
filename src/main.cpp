#include <iostream>
#include <sstream>
#include <string>
#include "anovaData.h"
using namespace std;
//read these:
/*
https://towardsdatascience.com/coding-neural-network-forward-propagation-and-backpropagtion-ccf8cf369f76
https://medium.com/@erikhallstrm/backpropagation-from-the-beginning-77356edf427d


https://www.thoughtco.com/example-of-an-anova-calculation-3126404
https://en.wikipedia.org/wiki/Analysis_of_variances
*/



int main()
{
	string input;
	unsigned int samples;
	cout << "Hello\nHow Many Samples: ";
	getline(cin, input);
	stringstream(input) >> samples;

	AnovaData *myData = new AnovaData(samples);
	
	cout << "\nInput your numerical data for sample 1(type f to finish)\n";





	return 0;
}