#include "MyComputer.h"

MyComputer::MyComputer() {
    processor = "Unknown";
    motherboard = "Unknown";
    hddSizeGB = 0;
    ramSizeGB = 0;
    GraphicsCard = "Unknown";
    hasDvdDrive = false;
    // cout << this << "\nMyComputer object created." << endl;
}

MyComputer::MyComputer(string processor, string motherboard, int hddSizeGB,
    int ramSizeGB, string GraphicsCard, bool hasDvdDrive)
{
    this->setComputerInfo(processor, motherboard, hddSizeGB, ramSizeGB, GraphicsCard, hasDvdDrive);
}

MyComputer::~MyComputer() {
    // cout << "\nMyComputer\t" << this << "\tobject destroyed." << endl;
}

void MyComputer::setProcessor(string proc) {
    processor = proc;
}

void MyComputer::setMotherboard(string mb) {
    motherboard = mb;
}

void MyComputer::setHddSizeGB(int hdd) {
    hddSizeGB = hdd;
}

void MyComputer::setRamSizeGB(int ram) {
    ramSizeGB = ram;
}

void MyComputer::setGraphicsCard(string gpu) {
    GraphicsCard = gpu;
}

void MyComputer::setHasDvdDrive(bool hasDvd) {
    hasDvdDrive = hasDvd;
}

string MyComputer::getProcessor() const {
    return processor;
}

string MyComputer::getMotherboard() const {
    return motherboard;
}

int MyComputer::getHddSizeGB() const {
    return hddSizeGB;
}

int MyComputer::getRamSizeGB() const {
    return ramSizeGB;
}

string MyComputer::getGraphicsCard() const {
    return GraphicsCard;
}

bool MyComputer::getHasDvdDrive() const {
    return hasDvdDrive;
}

void MyComputer::printComputerInfo() const {
    cout << "Processor: " << processor << endl;
    cout << "Motherboard: " << motherboard << endl;
    cout << "HDD Size: " << hddSizeGB << " GB" << endl;
    cout << "RAM Size: " << ramSizeGB << " GB" << endl;
    cout << "Graphics Card: " << GraphicsCard << endl;
    cout << "Has DVD Drive: " << (hasDvdDrive ? "Yes" : "No") << endl;
}

void MyComputer::setComputerInfo(string proc, string mb, int hdd, int ram, string gpu, bool hasDvd) {
    setProcessor(proc);
    setMotherboard(mb);
    setHddSizeGB(hdd);
    setRamSizeGB(ram);
    setGraphicsCard(gpu);
    setHasDvdDrive(hasDvd);
}
