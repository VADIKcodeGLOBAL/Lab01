#pragma once

#include <iostream>
#include "MyComputer.h"

using namespace std;

class ComputerManager {
private:
    MyComputer* computers;
    int count;
    int capacity;

public:
    ComputerManager(int maxCapacity = 10);
    
    // Rule of Three: Деструктор, конструктор копирования, оператор присваивания
    ~ComputerManager();
    ComputerManager(const ComputerManager& other);
    ComputerManager& operator=(const ComputerManager& other);

    void addComputer(const MyComputer& comp);
    void showComputers() const;
    void showByMinRam(int minRam) const;
    void showWithDvdDrive() const;
    void handleUserMenu();
};
