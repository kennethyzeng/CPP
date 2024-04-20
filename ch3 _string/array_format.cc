#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;
#include<iterator>
using std::begin; using std::end;

int main()
{
    int ia[12]={1, 2, 3, 4, 5, 6, 7,8, 9, 11,12}; 
    int *pbeg = begin(ia);
    //int *pend = end(ia)-2; 
    int *pend = end(ia);
    cout << *pbeg << " "<<*pend << endl;

    for(auto p = pbeg; p != pend; ++p)
        cout << *p << " ";    //1 2 3 4 5 6 7 8 9 11 12 0   13 elements?
    cout << endl;

    while(pbeg!= pend)
        cout << *pbeg++ << " "; //1 2 3 4 5 6 7 8 9 11 12 0   13 elements?
    cout << endl;

    int ia6[12]={0}; 
    for(auto i: ia6)
        cout << i << " ";   // 0 0 0 0 0 0 0 0 0 0 0 0    only 12 elements?
    cout << endl; 

    int ia1[3][4]; 
    int arr[10][20][30]={0};

    int ia2[3][4]={
        {0,1,2,3},    //row index 0
        {4,5,6,7},
        {8,9,10,11}
    };

    int ia3[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};   //equivalent ia2

    int ia4[3][4]={{0},{4},{8}};
    //{{0, 0,0,0},{4,0,0,0},{8,0,0,0}}  #initialized only element 0

    int ix[3][4]={0,3,6,9};
    //{{0,3,6,9},{0,0,0,0},{0,0,0,0}} //initlized only row 0;

    constexpr size_t rowCnt =3, colCnt =4; 
    int ia5[rowCnt][colCnt];

    for(size_t i=0; i != rowCnt; ++i){
        for (size_t j=0; j != colCnt; j++){
            ia5[i][j]= i * colCnt + j;  //can help to convert matrix to array
            cout << ia5[i][j] << " ";  
            //cout<<ix[i][j] << " ";
        }
    cout << endl;
    }

    for(const auto &row: ia5)
        for (auto col:row)
            cout << col << " "; 
    cout << endl;
    cout << ia5[0][0] << " " << ia5[2][3]<< endl;

    return 0;
}