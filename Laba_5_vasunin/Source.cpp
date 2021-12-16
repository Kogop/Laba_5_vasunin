#include <iostream>


using namespace std;
double n = 0;
double res = 0;

double Factorial(double n) {
	return (n == 0) ? 1 : n * Factorial(n - 1);
};

int main() {

	cin >> n;
	//cout << endl;
	//double m = Factorial(n);
	double m = 0;
	int i = 1;
	while (n >= pow(5,i))
	{
		m = n / pow(5, i);
		res += m;
		i++;
	}

	cout << res << endl;

	return 1;
}