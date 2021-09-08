#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double A;
	double B;
	double C;
	double R1;
	double R2;
	double d;

	cin >> A >> B >> C;
	cout << fixed << setprecision(5);

	d = B * B - 4 * A * C;


	if (d < 0 || A == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		R1 = (-B + sqrt(d)) / (2 * A);
		R2 = (-B - sqrt(d)) / (2 * A);
		cout << "R1 = "<< R1 << endl;
		cout << "R2 = "<< R2 << endl;
	}

	return 0;
}
