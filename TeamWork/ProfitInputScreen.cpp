#include "stdafx.h" 
#include "ProfitInputScreen.h" 
//���� ������ � �������
void ProfitInputScreen::setProfit()
{
	cout << "������� ��� ������� (������ �.�): " << endl;
	getaLine(addName);
	cout << "������� ��������� ������ (1000): " << endl;
	cin >> addPriceCar; cin.ignore(80, '\n');
	cout << "������� ��������� ������ (0): " << endl;
	cin >> addPriceService; cin.ignore(80, '\n');
	cout << "������� ���� ������ (03.10.2020): " << endl;
	getaLine(addDatePrice);
	Profit* ptrProfit = new Profit(addName, addPriceCar, addPriceService, addDatePrice);
	ptrProfitList->insertProfit(ptrProfit);             
}


