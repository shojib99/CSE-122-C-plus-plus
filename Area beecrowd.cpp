#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    // Calculate areas
    double triangle_area = 0.5 * A * C;
    double circle_area = M_PI * pow(C, 2);
    double trapezium_area = 0.5 * (A + B) * C;
    double square_area = pow(B, 2);
    double rectangle_area = A * B;
    // Display the results
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangle_area << endl;
    cout << "CIRCULO: " << circle_area << endl;
    cout << "TRAPEZIO: " << trapezium_area << endl;
    cout << "QUADRADO: " << square_area << endl;
    cout << "RETANGULO: " << rectangle_area << endl;

    return 0;
}
