#include "complex.h"
#include <iostream>
#include <cstdlib>

using namespace std;
using namespace yatospace_numbers;

int main(void)
{
	try {
		Complex a = Complex();
		Complex b = Complex();

		cout << "Unesi prvi kompleksan broj: ";
		cin >> a; cout << "Uneseni broj je " << a << endl;
		cout << "Unesi drugi kompleksan broj: ";
		cin >> b; cout << "Uneseni broj je " << b << endl;

		Complex c, d, e, f;
		c = a + b;
		d = a - b;
		e = a * b;

		bool dvdError = false;


		try { f = a / b; }
		catch (string err) { dvdError = true; }

		cout << "Zbir je : " << c << endl;
		cout << "Razlika je : " << d << endl;
		cout << "Proizvod je : " << e << endl;
		if (dvdError) cout << "Kolicnik je nedefinisan." << endl;
		else cout << "kolicnik je : " << f << endl;
		
		cout << "Moduo prvog : " << a.module() << endl;
		cout << "Moduo drugog : " << b.module() << endl;
		cout << "Moduo zbira : " << c.module() << endl;
		cout << "Moduo razlike : " << d.module() << endl;
		cout << "Moduo proizvoda : " << e.module() << endl;
		if (!dvdError) cout << "Moduo kolicnika  : " << f.module() << endl;
		
		cout << "Faza prvog : " << a.phase() << endl;
		cout << "Faza drugog : " << b.phase() << endl;
		cout << "Faza zbira : " << c.phase() << endl;
		cout << "Faza razlike : " << d.phase() << endl;
		cout << "Faza proizvoda : " << e.phase() << endl;

		if (!dvdError) cout << "Faza kolicnika  : " << f.phase() << endl;

		return 0;
	}
	catch (string error) {
		cout << "Desila se greska.";
		cout << error << endl;
		return 0;
	}
}

