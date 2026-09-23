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
	MyComputer() {
		
	}

	MyComputer(string processor, string motherboard, int hddSizeGB,
		int ramSizeGB, string GraphicsCard, bool hasDvdDrive)
	{
		setComputerInfo(processor, motherboard, hddSizeGB, ramSizeGB, GraphicsCard, hasDvdDrive);
	}

	~MyComputer() {
		cout << "MyComputer object destroyed." << endl;
	}

	void setProcessor(string proc)
	{
		processor = proc;
	}
	void setMotherboard(string mb)
	{
		motherboard = mb;
	}
	void setHddSizeGB(int hdd)
	{
		hddSizeGB = hdd;
	}
	void setRamSizeGB(int ram)
	{
		ramSizeGB = ram;
	}
	void setGraphicsCard(string gpu)
	{
		GraphicsCard = gpu;
	}
	void setHasDvdDrive(bool hasDvd){
		hasDvdDrive = hasDvd;
	}

	void getProcessor()
	{
		cout << "Processor: " << processor << endl;
	}
	void getMotherboard()
	{
		cout << "Motherboard: " << motherboard << endl;
	}
	void getHddSizeGB()
	{
		cout << "HDD Size: " << hddSizeGB << " GB" << endl;
	}
	void getRamSizeGB()
	{
		cout << "RAM Size: " << ramSizeGB << " GB" << endl;
	}
	void getGraphicsCard()
	{
		cout << "Graphics Card: " << GraphicsCard << endl;
	}
	void getHasDvdDrive()
	{
		cout << "Has DVD Drive: " << (hasDvdDrive ? "Yes" : "No") << endl;
	}

	void printComputerInfo()
	{
		getProcessor();
		getMotherboard();
		getHddSizeGB();
		getRamSizeGB();
		getGraphicsCard();
		getHasDvdDrive();
	};
	void setComputerInfo(string proc, string mb, int hdd, int ram, string gpu, bool hasDvd)
	{
		setProcessor(proc);
		setMotherboard(mb);
		setHddSizeGB(hdd);
		setRamSizeGB(ram);
		setGraphicsCard(gpu);
		setHasDvdDrive(hasDvd);
	};
};




int main() {
	MyComputer comp;
	comp.setComputerInfo("ryzen 2 2600", "Gigabyte B550", 1024, 32, "RX 6600", false);
	comp.printComputerInfo();
	return 0;
}