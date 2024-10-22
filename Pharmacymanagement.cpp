#include <iostream>
#include <iomanip> // For formatting output
#include <limits>
using namespace std;

void Medicine_name()
{
	// system("color 2a");
	system("cls");
	int option;
	char medicine_name[50];
	char medicine_name2[50];
	char product_name[40];
	string medicineName[10] = {"Alemtuzumab", "Alendronate", "Allopurinol", "Cefixime", "Dobutamine", "Enalapril", "Sprout", "Pediasure", "Enfamil", "Dexolac"};
	double Medicine[10] = {66.00, 32.00, 11.00, 46.00, 13.00, 52.00, 76.00, 44.00, 330.00, 550.00};
	cout << "\t\t**************************************************************" << endl;
	cout << "\t\t**************************************************************" << endl;
	cout << "\t\t<<<<<<<<<<<<<<<<<<<<<<**PHRMACY**>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "\t\t**************************************************************" << endl;
	cout << "\t\t**************************************************************" << endl
		 << endl;
	cout << "\t*******************************************************************\n";
	cout << "\tDRUGS ID" << "\tDRUGS TYPE" << "   \t\tDRUGS NAME" << "           DRUGS PRICE(Rs)" << endl;
	cout << "\t****************************************************************************\n";
	cout << "\t0001" << "\t" << "\tOTC" << "\t\t" << "    Alemtuzumab" << "			Rs 66.00" << endl;
	cout << "\t0002" << "\t" << "\tOTC" << "\t\t" << "    Alendronate" << "\t		Rs 32.00" << endl;
	cout << "\t0003" << "\t" << "\tOTC" << "\t\t" << "    Allopurinol " << "		Rs 11.00" << endl;
	cout << "\t0004" << "\t" << "\tOTC" << "\t\t" << "    Cefixime" << "	\t	Rs 46.00" << endl;
	cout << "\t0005" << "\t" << "\tOTC" << "\t\t" << "    Dobutamine" << " \t	 	Rs 13.00" << endl;
	cout << "\t0006" << "\t" << "\tOTC" << "\t\t" << "    Enalapril" << " 	\t	Rs 52.00" << endl;
	cout << "\t0007" << "\t" << "\tOTC" << "\t\t" << "    Sprout" << "	\t	Rs 76.00" << endl;
	cout << "\t0008" << "\t" << "\tOTC" << "\t\t" << "    Pediasure" << "			Rs 44.00" << endl;
	cout << "\t0009" << "\t" << "\tOTC" << "\t\t" << "    Enfamil" << "			Rs 330.00" << endl;
	cout << "\t0010" << "\t" << "\tOTC" << "\t\t" << "    Dexolac" << "	\t	Rs 550.00" << endl;
	cout << "\t******************************************************************************\n";
	cout << " " << endl;

	cout << "\n\tenter medicine name:" << endl;
	cin >> medicine_name;
	cout << "enter medicine name :" << endl;
	cin >> medicine_name2;
	cout << "enter baby food :" << endl;
	cin >> product_name;
	cout << " your product are avaliable\n";
	cout << endl;
	cout << endl;
}
void medicine_record()

{
	system("cls");
	int medicine_name[40];

	int MFD[70];

	int EXP[30];

	cout << "*******************************************************************" << endl;
	cout << "*******************************************************************" << endl;
	cout << "<<<<<<<<<<<<<<<<<<<<**medicine_record**>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "********************************************************************" << endl;
	cout << "********************************************************************" << endl;

	cout << "\tDRUGS ID" << "\tDRUGS NAME" << "   \t\tMFD" << "          \t\t\t EXP" << endl;
	cout << "\t******************************************************************************\n";
	cout << "\t0001" << "\t" << "\tAlemtuzumab" << "\t\t" << " 19-1-2021   " << "	\t	19-1-2028" << endl;
	cout << "\t0002" << "\t" << "\tAlendronate" << "\t\t" << "  6-5-2020  " << "\t		19-6-2026" << endl;
	cout << "\t0003" << "\t" << "\tAllopurinol" << "\t\t" << "  19-2-2021   " << "	\t	29-3-2027" << endl;
	cout << "\t0004" << "\t" << "\tCefixime" << "\t\t" << "   5-3-2021 " << "	\t	27-6-2025" << endl;
	cout << "\t0005" << "\t" << "\tDobutamine" << "\t\t" << "  6-1-2021  " << " \t\t	 25-9-2023" << endl;
	cout << "\t0006" << "\t" << "\tEnalapril" << "\t\t" << "   7-1-2022 " << " 	\t	09-6-2028" << endl;
	cout << "\t0007" << "\t" << "\tSprout" << "\t\t\t" << "    15-1-2020" << "	\t	18-5-2028" << endl;
	cout << "\t0008" << "\t" << "\tPediasure" << "\t\t" << "  19-1-2022  " << "\t\t	05-9-2024" << endl;
	cout << "\t0009" << "\t" << "\tEnfamil" << "\t\t\t" << "   8-9-2021 " << "			06-1-2023" << endl;
	cout << "\t0010" << "\t" << "\tDexolac" << "\t\t\t" << "  16-2-2021  " << "	\t	29-5-2028" << endl;
	cout << "\t**********************************************************************************\n";
}

void bill()

{
	system("cls");
	char medicine[90];
	int price, price_2, price_3, discount;
	int total, total1, total2, quantity, Q1, Q2, Total;
	char medicine_2[10];
	char bill_no[60];
	char other_product[50];
	string medicineName[10] = {"Alemtuzumab", "Alendronate", "Allopurinol", "Cefixime", "Dobutamine", "Enalapril", "Sprout", "Pediasure", "Enfamil", "Dexolac"};
	double Medicine[10] = {66.00, 32.00, 11.00, 46.00, 13.00, 52.00, 76.00, 44.00, 330.00, 550.00};
	cout << "***************************************************************" << endl;
	cout << "****************************************************************" << endl;
	cout << "<<<<<<<<<<<<<<<<<<<<<<**billing **>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "****************************************************************" << endl;
	cout << "****************************************************************" << endl;
	cout << "\t*******************************************************************\n";
	cout << "\tDRUGS ID" << "\tDRUGS TYPE" << "   \t\tDRUGS NAME" << "           DRUGS PRICE(Rs)" << endl;
	cout << "\t********************************************************************************\n";
	cout << "\t0001" << "\t" << "\tOTC" << "\t\t" << "    Alemtuzumab" << "			Rs 66.00" << endl;
	cout << "\t0002" << "\t" << "\tOTC" << "\t\t" << "    Alendronate" << "\t		Rs 32.00" << endl;
	cout << "\t0003" << "\t" << "\tOTC" << "\t\t" << "    Allopurinol " << "		Rs 11.00" << endl;
	cout << "\t0004" << "\t" << "\tOTC" << "\t\t" << "    Cefixime" << "	\t	Rs 46.00" << endl;
	cout << "\t0005" << "\t" << "\tOTC" << "\t\t" << "    Dobutamine" << " \t	 	Rs 13.00" << endl;
	cout << "\t0006" << "\t" << "\tOTC" << "\t\t" << "    Enalapril" << " 	\t	Rs 52.00" << endl;
	cout << "\t0007" << "\t" << "\tOTC" << "\t\t" << "    Sprout" << "	\t	Rs 76.00" << endl;
	cout << "\t0008" << "\t" << "\tOTC" << "\t\t" << "    Pediasure" << "			Rs 44.00" << endl; // 1353fn
	cout << "\t0009" << "\t" << "\tOTC" << "\t\t" << "    Enfamil" << "			Rs 330.00" << endl;
	cout << "\t0010" << "\t" << "\tOTC" << "\t\t" << "    Dexolac" << "	\t	Rs 550.00" << endl;
	cout << "\t************************************************************************************\n";
	cout << " " << endl;

	cout << "your bill number is\n :" << endl;
	cin >> bill_no;
	cout << "\n medicine name quantity and price\n";
	cin >> medicine >> price >> quantity;
	total = quantity * price;
	cout << "2nd medicine quantity and price:" << endl;
	cin >> medicine_2 >> price_2 >> Q1;
	total1 = Q1 * price_2;
	cout << "product  quantity and price :" << endl;
	cin >> other_product >> price_3 >> Q2;
	total2 = Q2 * price_3;
	cout << "\tyour bill is generate:" << endl;
	cout << "\t---------------------------------------\n";
	cout << "\n| bill no :" << bill_no << "|" << "\n";
	cout << medicine << "\t" << price << "\t" << total << "\n";
	cout << medicine_2 << "\t" << price_2 << "\t" << total1 << "\n";
	cout << other_product << "\t" << price_3
		 << "\t" << total2 << "\n";
	Total = total + total1 + total2;
	cout << "Total =" << "\t" << Total << "\n";
	if (Total >= 1000)
	{
		discount = Total - 0.20 * (Total);
		cout << "\ndiscount:" << "\t" << discount << "\n";
	}
	if (Total >= 2000)
	{
		discount = Total - 0.35 * (Total);
		cout << "\ndiscount:" << "\t" << discount << "\n";
	}
	else if (Total >= 1500)
	{
		discount = Total - 0.30 * (Total);
		cout << "\ndiscount:" << "\t" << discount << "\n";
	}
	cout << "\t---------------------------------------\n";
	cout << endl;
	cout << endl;
}

int main()

{
	system("cls");
	int option;
	cout << "PRESENTED BY" << endl;
	cout << "\n\tMUHAMMAD SHAHEER" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "\t\t\t***************PHARMACY_MANAGEMENT********" << endl;
	cout << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	while (1)
	{
		cout << endl;
		cout << endl;

		cout << "\t\tPress 1.Enter medicine and baby food :" << endl;
		cout << "\t\tPress 2.medicine_record:" << endl;
		cout << "\t\tPress 3.bill generate:" << endl;
		cout << "\t\tPress 4.To EXIT...." << endl;
		cout << "\toption :";
		cin >> option;
		switch (option)
		{
		case 1:

			Medicine_name();
			break;
		case 2:
			medicine_record();
			break;
		case 3:
			bill();
			break;
		case 4:
			exit(0);
		default:
			cout << "\n\tInvalid input!\n\tPlease try again\n\n";
			break;
		}
	}
}