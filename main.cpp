#include "complex_number.hpp"
using namespace std;

int main()
{
	complex_number<double> r1(1.1,1.0);
	complex_number<double> r2(1.2,0.0);
	cout << r1 << " + " << r2 << " = " << r1+r2 << endl;
	//il + va
	cout<<"Real part of r2 is:"<<r2.re()<<endl;
	cout<<"Immaginary part of r2 is:"<<r2.im()<<endl;
	cout<<"the conjugate of r2 is:"<<r2.coniugate()<<endl;
	// stampa
	complex_number<double> c1(3.1, 4.0);   // 3 + 4i
    complex_number<double> c2(5, -2);  // 5 - 2i
    complex_number<double> c3(7, 0);   // 7 + 0i (numero puramente reale)
    
    cout << "c1: " << c1 << endl;  // Stampa: 3 + 4i
    cout << "c2: " << c2 << endl;  // Stampa: 5 - 2i
    cout << "c3: " << c3 << endl;  // Stampa: 7
	
	
	complex_number<double> a1(3, 4);  // 3 + 4i
    complex_number<double> a2(1, 2);  // 1 + 2i
    complex_number<double> a3(0, -1); // 0 - 1i

    // Test dell'operatore *
    complex_number<double> result = a1 * a2;  // Moltiplica c1 e c2
    cout << "a1 * a2 = " << result << endl;  // Stampa il risultato

    // Test dell'operatore *=
    a1 *= a3;  // Moltiplica c1 per c3 e assegna il risultato a c1
    cout << "a1 after a1 *= a3: " << a1 << endl;  // Stampa il nuovo c1
	return 0;
}