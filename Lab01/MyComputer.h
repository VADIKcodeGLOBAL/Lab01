#pragma once

#include <iostream>
#include <string>

using namespace std;

class MyComputer {
private:
    string processor;
    string motherboard;
    int hddSizeGB;
    int ramSizeGB;
    string GraphicsCard;
    bool hasDvdDrive;

public:
    MyComputer();
    MyComputer(string processor, string motherboard, int hddSizeGB,
        int ramSizeGB, string GraphicsCard, bool hasDvdDrive);
    ~MyComputer();

    void setProcessor(string proc);
    void setMotherboard(string mb);
    void setHddSizeGB(int hdd);
    void setRamSizeGB(int ram);
    void setGraphicsCard(string gpu);
    void setHasDvdDrive(bool hasDvd);

    string getProcessor() const;
    string getMotherboard() const;
    int getHddSizeGB() const;
    int getRamSizeGB() const;
    string getGraphicsCard() const;
    bool getHasDvdDrive() const;

    void printComputerInfo() const;
    void setComputerInfo(string proc, string mb, int hdd, int ram, string gpu, bool hasDvd);
};
