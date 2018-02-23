#include<iostream>
using namespace std;

class Mat33
{
public:
	double data[2][2];
	Mat33(double r0c0, double r0c1, double r0c2 ,
		double r1c0, double r1c1, double r1c2, 
		double r2c0, double r2c1, double r2c2)
	{
		data[0][0] = r0c0;
		data[0][1] = r0c1;
		data[0][2] = r0c2;
		data[1][0] = r1c0;
		data[1][1] = r1c1;
		data[1][2] = r1c2;
		data[2][0] = r2c0;
		data[2][1] = r2c1;
		data[2][2] = r2c2;
	}

	void display()
	{
		cout << "[" << data[0][0] << " " << data[0][1] << " " << data[0][2] << endl;
		cout << data[1][0] << " " << data[1][1] << " " << data[1][2] << endl;
		cout << data[2][0] << " " << data[2][1] << " " << data[2][2] << "]";
	}
};


/*Mat33::Mat33(double r1c1, double r1c2, double r1c3, double r2c1, double r2c2, double r2c3, double r3c1, double r3c2, double r3c3)
{
	data[0][0] = r1c1;
	data[0][1] = r1c2;
	data[0][2] = r1c3;
	data[1][0] = r2c1;
	data[1][1] = r2c2;
	data[1][2] = r2c3;
	data[2][0] = r3c1;
	data[2][1] = r3c2;
	data[2][2] = r3c3;
}*/

/*Mat33 Mat33::data(double r1c1, double r1c2, double r1c3, double r2c1, double r2c2, double r2c3, double r3c1, double r3c2, double r3c3)
{
	Mat33 I;
	I.data[0][0] = 1;
	I.data[0][1] = 2;
	I.data[0][2] = 3;
	I.data[1][0] = 4;
	I.data[1][1] = 5;
	I.data[1][2] = 6;
	I.data[2][0] = 7;
	I.data[2][1] = 8;
	I.data[2][2] = 9;


	return Mat33();
}*/

int main()
{
	Mat33 I(0,1,2,3,4,5,6,7,8);
	I.display();

	/*cout << I.data[0][0];
	cout << I.data[0][1]; 
	cout << I.data[0][2];
	cout << I.data[1][0];
	cout << I.data[1][1];
	cout << I.data[1][2];
	cout << I.data[2][0];
	cout << I.data[2][1];
	cout << I.data[2][2];
	cout << I.data[0][2];*/

	/*for (int i = 0; i <=2; i++)
	{
		for (int j = 0; j <=2; j++)
		{
			cout << I.data[i][j] << endl;
		}
	}*/
	getchar();
	return 0;
}