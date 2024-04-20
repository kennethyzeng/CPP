#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
#include<vector>
using std::vector;
#include <cstring>
#include<iterator>
using std::begin; 
using std::end; 

int main()
{
    int ia[3][4] = {
        {0,1,2,3},
        {4,5,6,7}, 
        {8,9,10,11}
    };

    for (int (&row)[4] : ia)
        for (int col : row)
            cout << col << " "; 
    cout << endl ;

    for (int i= 0; i < 3; ++i)
        for(int j=0; j < 4; ++j){
            cout<< ia[i][j] << " ";  
        }
    cout << endl;

    cout << ia << " " << ia + 1 << " " << ia+3 << endl; // the beginning address is whole row of ia
    for(int (*row)[4] = ia; row != ia +3; row ++)
    {
        cout << row << endl;
        for (int *col = *row; col!=*row + 4; ++col)
            cout << *col << " "; 
    }
    cout<< endl; 

    return 0;

}