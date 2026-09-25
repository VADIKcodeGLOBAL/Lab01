#include <iostream>
#include "MyComputer.h"
#include "ComputerManager.h"

using namespace std;

int main() {
    ComputerManager manager(5);

    manager.addComputer(MyComputer("Ryzen 5 2600", "Gigabyte B550", 1024, 32, "RX 6600", false));
    manager.addComputer(MyComputer("Intel Core i3 10100F", "MSI H410M", 512, 8, "GTX 1050 Ti", true));
    manager.addComputer(MyComputer("Ryzen 7 5700X", "Asus ROG Strix B550", 2048, 64, "RTX 3070", false));

    // Проверка конструктора копирования
    ComputerManager managerCopy = manager;
    cout << "\n--- Showing Copied Manager Computers ---" << endl;
    managerCopy.showComputers();

    manager.handleUserMenu();

    return 0;
}
