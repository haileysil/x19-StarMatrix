#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector < vector <char> > starMatrix;
int num_rows,num_cols;

int main()
{
        cout<<"Please enter the number of rows and columns in the star matrix:"<<endl;
        cin>>num_rows;
        cin>>num_cols;

        if (num_rows > 0 && num_cols > 0)
        {
                starMatrix.resize(num_rows);

                for (int r = 0; r < num_rows; r++)
                {
                        starMatrix[r].resize(num_cols);

                        for (int c = 0; c < num_cols; c++)
                        {
                                starMatrix[r][c]='*';
                                cout<<starMatrix[r][c];
                        }
                        cout<<" "<<endl;
                }
        }
        else 
        {

        }
        return 0;
}
