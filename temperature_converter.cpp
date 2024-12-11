#include <iostream>
#include <iomanip>
using namespace std;

void showMenu() {
    cout << "\nTemperature Converter" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "3. Convert Celsius to Kelvin" << endl;
    cout << "4. Convert Kelvin to Celsius" << endl;
    cout << "5. Convert Fahrenheit to Kelvin" << endl;
    cout << "6. Convert Kelvin to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}

void celsiusToFahrenheit() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << fahrenheit << " F" << endl;
}

void fahrenheitToCelsius() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << fixed << setprecision(2) << celsius << " C" << endl;
}

void celsiusToKelvin() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    double kelvin = celsius + 273.15;
    cout << "Temperature in Kelvin: " << fixed << setprecision(2) << kelvin << " K" << endl;
}

void kelvinToCelsius() {
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    double celsius = kelvin - 273.15;
    cout << "Temperature in Celsius: " << fixed << setprecision(2) << celsius << " C" << endl;
}

void fahrenheitToKelvin() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    double kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
    cout << "Temperature in Kelvin: " << fixed << setprecision(2) << kelvin << " K" << endl;
}

void kelvinToFahrenheit() {
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    double fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32;
    cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << fahrenheit << " F" << endl;
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                celsiusToFahrenheit();
                break;
            case 2:
                fahrenheitToCelsius();
                break;
            case 3:
                celsiusToKelvin();
                break;
            case 4:
                kelvinToCelsius();
                break;
            case 5:
                fahrenheitToKelvin();
                break;
            case 6:
                kelvinToFahrenheit();
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
