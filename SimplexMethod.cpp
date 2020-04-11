#include<iostream>
using namespace std;
void main() {
	int noOfVars = 0 , noOfContraints = 0;
	cout << "ENTER NO. OF VARIABLES\n";
	cin >> noOfVars;
	cout << "ENTER NO. OF CONSTRAINTS\n";
	cin >> noOfContraints;
	

	double* costFunc = new double[noOfVars];
	double* slackVars = new double[noOfContraints];
	double** constraints = new double*[noOfContraints];
	double** manipulation = new double*[noOfContraints + 1];
	for (int i = 0; i < (noOfContraints + 1); i++)
	{
		manipulation[i] = new double[((noOfVars) * 2) + 2];
	}
	double* rightSideOfConstraints = new double[noOfContraints];

	for (int i = 0; i < noOfContraints; i++)
	{
		constraints[i] = new double[noOfVars];
	}

	for (int i = 0; i < noOfVars; i++)
	{
		cout << "ENTER Cofficient Of X" << i + 1 << endl;
		cin >> costFunc[i];//index indicates variable number and value is cofficient
		cout << endl;
	}



	for (int i = 0; i < noOfContraints; i++)
	{
		cout << "ENTER CONSTRAINT :" << i + 1 << endl;
		for (int j = 0; j < noOfVars; j++)
		{
			cout << "ENTER Co-Efficient of X" << j + 1 << endl;
			cin >> constraints[i][j];
			cout << endl;
		}
		cout << "ENTER b:";
		cin >> rightSideOfConstraints[i];
		cout << endl;
	}
	
	


	
	


	system("pause");
}