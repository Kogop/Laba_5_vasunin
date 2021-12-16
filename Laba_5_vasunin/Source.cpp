#include <iostream>


using namespace std;
double n = 0;
double res = 0;


int main() {

	cin >> n;
	
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