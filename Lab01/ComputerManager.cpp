#include "ComputerManager.h"

ComputerManager::ComputerManager(int maxCapacity) {
    capacity = maxCapacity;
    count = 0;
    computers = new MyComputer[capacity];
}

ComputerManager::~ComputerManager() {
    delete[] computers;
    cout << "\n[ComputerManager] deleted" << endl;
}

// Конструктор копирования (глубокое копирование)
ComputerManager::ComputerManager(const ComputerManager& other) {
    capacity = other.capacity;
    count = other.count;
    computers = new MyComputer[capacity];
    for (int i = 0; i < count; i++) {
        computers[i] = other.computers[i];
    }
}

// Оператор присваивания копированием (глубокое копирование)
ComputerManager& ComputerManager::operator=(const ComputerManager& other) {
    if (this == &other) {
        return *this;
    }

    delete[] computers;

    capacity = other.capacity;
    count = other.count;
    computers = new MyComputer[capacity];
    for (int i = 0; i < count; i++) {
        computers[i] = other.computers[i];
    }

    return *this;
}

void ComputerManager::addComputer(const MyComputer& comp) {
    if (count < capacity) {
        computers[count] = comp;
        count++;
    }
    else {
        cout << "\nArray is already full! \nFree up space to add more computers." << endl;
    }
}

void ComputerManager::showComputers() const {
    if (count == 0) {
        cout << "\nNo computers in the manager." << endl;
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "\nPC #" << i + 1 << ":" << endl;
        computers[i].printComputerInfo();
    }
}

void ComputerManager::showByMinRam(int minRam) const {
    cout << "\nPC with RAM >= " << minRam << " GB:" << endl;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (computers[i].getRamSizeGB() >= minRam) {
            computers[i].printComputerInfo();
            cout << "------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Do not have computers with that RAM size." << endl;
    }
}

void ComputerManager::showWithDvdDrive() const {
    cout << "\nPC with DVD Drive:" << endl;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (computers[i].getHasDvdDrive()) {
            computers[i].printComputerInfo();
            cout << "------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Do not have computers with DVD drive." << endl;
    }
}

void ComputerManager::handleUserMenu() {
    int choice = -1;
    while (choice != 0) {
        cout << "\nMENU OPPORTUNITIES" << endl;
        cout << "1. SHOW ALL COMPUTERS" << endl;
        cout << "2. FIND PC BY MINIMUM RAM SIZE" << endl;
        cout << "3. FIND PC WITH DVD DRIVE" << endl;
        cout << "0. EXIT" << endl;
        cout << "YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showComputers();
            break;
        case 2: {
            int ram;
            cout << "Enter minimum RAM size (GB): ";
            cin >> ram;
            showByMinRam(ram);
            break;
        }
        case 3:
            showWithDvdDrive();
            break;
        case 0:
            cout << "Completing work with the program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again!" << endl;
        }
    }
}
