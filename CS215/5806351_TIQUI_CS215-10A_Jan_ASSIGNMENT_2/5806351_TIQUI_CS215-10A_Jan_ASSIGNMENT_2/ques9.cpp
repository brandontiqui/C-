#include <iostream>
using namespace std;

int **malloc2d(int, int);
void print(int **, int);

// program begins function execution
int main ()
{
	// input number of vertices
	int i, j, V;
	cout << "Enter the number of vertices: ";
	cin >> V;
	
	int **adj = malloc2d(V, V); // allocate matrix
	for (i = 0; i < V; i++) // initialize matrix with 0's
		for (j = 0; j < V; j++)
			adj[i][j] = 0;
	for (i = 0; i < V; i++) // initialize diagonal with 1's
		adj[i][i] = 1;
	
	// input the edges
	cout << "Enter the coordinates for an edge (or 'Ctrl' + 'Z'): ";
	while (cin >> i >> j)
	{
		adj[i][j] = 1;
		adj[j][i] = 1;
		cout << "Enter the coordinates for an edge (or 'Ctrl' + 'Z'): ";
	}

	// print matrix
	print (adj, V);

	return 0; // indicates successful completion
} // end function main


int **malloc2d(int r, int c)
{
	int **t = new int*[r];
	for (int i = 0; i < r; i++)
		t[i] = new int[c];
	return t;
} // end function malloc2d

void print (int ** a, int size)
{
	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++)
			if (a[i][j] == 1)
				cout << "There is an edge between " << i << " and " 
					<< j << "." << endl;
} // end function print