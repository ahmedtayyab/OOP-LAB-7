#include<iostream>
using namespace std;

class matrix
{
public: 
	int ROW, COL; double **mat; 
public:
	matrix()
	{
		ROW = 0; COL = 0; mat = NULL;
	}
	~matrix() 
	{
		if (mat != NULL)
		{
			for (int i = 0; i < ROW; i++)
			{
				delete[] mat[i];
			} 
			delete[] mat;
		}
	}
	void build() 
	{
		cout << "Enter number of Rows : ";
		cin >> ROW;
		cout << "Enter number of Columns : ";
		cin >> COL;
		mat = new double*[ROW];
		for (int i = 0; i < ROW; i++)
		{
			mat[i] = new double[COL];
		}
		input();
	}
	void input() 
	{
		cout << "Enter matrix elements :" << endl; for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++) 
			{
				cin >> mat[i][j];
			}
		}
	}
};

void transpose(matrix &k) 
{
	matrix t;
	t.ROW = k.COL;
	t.COL = k.ROW;
	t.mat = new double*[t.ROW]; 
	for (int i = 0; i < t.ROW; i++)
	{
		t.mat[i] = new double[t.COL];
	}
	for (int i = 0; i < k.ROW; i++)
	{
		for (int j = 0; j < k.COL; j++)
		{
			t.mat[j][i] = k.mat[i][j];
		}
	}
	cout << "Transpose of the matrix is :" << endl;
	for (int i = 0; i < t.ROW; i++)
	{
		for (int j = 0; j < t.COL; j++)
		{
			cout << t.mat[i][j] << " ";
		}
		cout << endl;
	}
}
int main() 
{
	matrix m1, m2; m1.build();
	cout << "Enter details of second matrix:" << endl;
	m2.build();
	transpose(m1);
	transpose(m2);
	system("pause");
}
