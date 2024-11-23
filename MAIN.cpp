#include <iostream>
#include "Tienda.h"
#include "MotoGasolina.h"
#include "MotoElectrica.h"

using namespace std;

// Function to display the main menu
int mostrarMenu() {
    cout << "\n--- Main Menu ---\n";
    cout << "1. Add Gasoline Motorcycle\n";
    cout << "2. Add Electric Motorcycle\n";
    cout << "3. Sell Gasoline Motorcycle\n";
    cout << "4. Sell Electric Motorcycle\n";
    cout << "5. View Inventory\n";
    cout << "6. View Total Revenue\n";
    cout << "7. Exit\n";
    cout << "Select an option: ";
    int option;
    cin >> option;
    return option;
}

// Main function
int main() {
    Inventario inventario;
    Tienda tienda("2024-11-22", inventario);

    int option;
    do {
        option = mostrarMenu();

        switch (option) {
            case 1: { // Add Gasoline Motorcycle
                string marca, modelo;
                int year, quantity, capacidadGasolina;
                float price, kmPerL;

                cout << "\nEnter motorcycle brand: ";
                cin >> marca;
                cout << "Enter motorcycle model: ";
                cin >> modelo;
                cout << "Enter motorcycle year: ";
                cin >> year;
                cout << "Enter motorcycle price: ";
                cin >> price;
                cout << "Enter motorcycle quantity: ";
                cin >> quantity;
                cout << "Enter tank capacity (in liters): ";
                cin >> capacidadGasolina;
                cout << "Enter kilometers per liter: ";
                cin >> kmPerL;

                tienda.compraMotoGasolina(new MotoGasolina(marca, modelo, year, price, quantity, capacidadGasolina, kmPerL));
                cout << "Gasoline motorcycle added successfully.\n";
                break;
            }
            case 2: { // Add Electric Motorcycle
                string marca, modelo;
                int year, quantity;
                float price, autonomia;

                cout << "\nEnter motorcycle brand: ";
                cin >> marca;
                cout << "Enter motorcycle model: ";
                cin >> modelo;
                cout << "Enter motorcycle year: ";
                cin >> year;
                cout << "Enter motorcycle price: ";
                cin >> price;
                cout << "Enter motorcycle quantity: ";
                cin >> quantity;
                cout << "Enter battery range (in kilometers): ";
                cin >> autonomia;

                tienda.compraMotoElectrica(new MotoElectrica(marca, modelo, year, price, quantity, autonomia));
                cout << "Electric motorcycle added successfully.\n";
                break;
            }
            case 3: { // Sell Gasoline Motorcycle
                string modelo;
                cout << "\nEnter the model of the gasoline motorcycle to sell: ";
                cin >> modelo;

                if (tienda.ventaMotoGasolina(modelo)) {
                    cout << "Gasoline motorcycle sold successfully.\n";
                } else {
                    cout << "Unable to sell gasoline motorcycle: " << modelo << ".\n";
                }
                break;
            }
            case 4: { // Sell Electric Motorcycle
                string modelo;
                cout << "\nEnter the model of the electric motorcycle to sell: ";
                cin >> modelo;

                if (tienda.ventaMotoElectrica(modelo)) {
                    cout << "Electric motorcycle sold successfully.\n";
                } else {
                    cout << "Unable to sell electric motorcycle: " << modelo << ".\n";
                }
                break;
            }
            case 5: { // View Inventory
                tienda.mostrarInventario();
                break;
            }
            case 6: { // View Total Revenue
                cout << "\nTotal Revenue: $" << tienda.getTotal() << "\n";
                break;
            }
            case 7: // Exit
                cout << "\nExiting the program. Thank you for using the system!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }

    } while (option != 7);

    return 0;
}
