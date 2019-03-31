#include<iostream>
using namespace std;
class VECTOR;
class MATRIXclass{
	int row1,col1;
	int **MAT;
	public :
		MATRIXclass(){
			cout << "Enter the row and column : ";
			cin >> row1 >> col1;
			MAT = new int*[row1];	
			for(int i=0; i<row1; i++)
				MAT[i] = new int[col1];

		} 
		void getmatrix();	
		void dismatrix();
		friend void MULTIPLY(MATRIXclass &M,VECTOR &V);
};
void MATRIXclass :: getmatrix(){
		cout << "Enter the Element of Matrix : \n";
		for(int i=0; i<row1; i++){
			for(int j=0; j<col1; j++){
				cout << "MAT[" << i << "][" << j << "]\t : ";
				cin >> MAT[i][j]; 
			}
		}
}
void MATRIXclass :: dismatrix(){
	cout << "Element of MATRIX is : \n";
		for(int i=0; i<row1; i++){
			for(int j=0; j<col1; j++){
				cout << "MAT[" << i << "][" << j << "]\t : " <<  MAT[i][j]; 
			}
			cout << endl;
		}
}

class VECTOR{
	int V[3];
	public : 
		void getvector(){
			cout << "Enter the Vector Coeficent : " << endl;
			for(int i=0; i<3; i++){
				cin >> V[i];
			}
		}
		void disvector(){
			cout << "Vector : \t " ;
			cout << V[0] << "i + " << V[1] << "j + " << V[2] << "k";
		}
		friend void MULTIPLY(MATRIXclass &M,VECTOR &V);
};
void MULTIPLY(MATRIXclass &M,VECTOR &V){
	if(3 == M.row1){
		int *ptr = new int[M.col1];
		for(int i=0; i<1; i++){
			for(int j=0; j<M.col1; j++){
				ptr[j] = 0;
				for(int k=0; k<M.row1; k++)
					ptr[j] += V.V[k] * M.MAT[k][j]; 
			}	                                                
		}
		cout << "After Multiplication : " << endl;
		for(int i=0; i<M.col1; i++)
			cout << "ptr[ " << i << "]\t : " << ptr[i] << endl;
			
	}else if(M.col1 == 1){
		int **ptr = new int*[M.row1];
		for(int i=0; i<3; i++)
			ptr[i] = new int[3];	
			
		for(int i=0; i<M.row1; i++){
			for(int j=0; j<3; j++){
				ptr[i][j] = 0;
				for(int k=0; k<1; k++)
					ptr[i][j] += M.MAT[i][k] * V.V[j]; 
			}
		}
		cout << "\nAfter Multiplication : " << endl;
		cout  << " Row1 : " << M.row1 << endl;
		for(int i=0; i<M.row1; i++){
			for(int j=0; j<3; j++)
				cout << "ptr[ " << i << "][ " << j << " ] \t : " <<  ptr[i][j] << "\t";
		cout << endl;
		}
	}else
		cout << "MULTIPLICATION IS NOT POSSIBLE.\n";
}	
int main(){
	int n;
	do{
		MATRIXclass M;
		VECTOR V;
		M.getmatrix();
		M.dismatrix();
		V.getvector();
		V.disvector();
		MULTIPLY(M,V);
		cout << "To continue press 1 else  press any key .\n";
		cin >> n;
	}while(n == 1);
	return 0;
}
