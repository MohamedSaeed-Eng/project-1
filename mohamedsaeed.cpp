#include <iostream>
using namespace std;
int main()
{
	double pi = 3.14159;
	double r;
	double h;
	double volume;
	cout << "enter the radius" << endl;
	cin >> r;
	cout << "enter the hight" << endl;
	cin >> h;
	cout << "the volume =" << endl;
	volume = pi * pow(r, 2) * h;
	cout << volume << endl;
	cout << "thank you" << endl;

}
