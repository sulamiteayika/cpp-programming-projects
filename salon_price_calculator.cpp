#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotal(double servicePrice, double extraFee,
                      double discountPercent)
{
    double subtotal = servicePrice + extraFee;
    double discount = subtotal * discountPercent / 100;
    return subtotal - discount;
}

int main()
{
    double servicePrice;
    double extraFee;
    double discountPercent;

    cout << "Enter the service price: $";
    cin >> servicePrice;

    cout << "Enter any additional fee: $";
    cin >> extraFee;

    cout << "Enter the discount percentage: ";
    cin >> discountPercent;

    if (servicePrice < 0 || extraFee < 0 ||
        discountPercent < 0 || discountPercent > 100)
    {
        cout << "Invalid information entered." << endl;
        return 1;
    }

    double finalTotal = calculateTotal(
        servicePrice, extraFee, discountPercent);

    cout << fixed << setprecision(2);
    cout << "The customer's final total is: $"
         << finalTotal << endl;

    return 0;
}