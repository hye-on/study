#include <iostream>
using namespace std;

int N, A, B;
int grade[100001][6];     
int grd, student;

int main(void)
{
    cin >> N;
    for(int i = 1 ; i <= N ; i++)
    {
        cin >> A >> B;
        grade[i][A] = grade[i-1][A] + 1;
      
        if(grade[i][A] > grd)               
        {
            grd = grade[i][A];
            student = A;
        }
      
        if(A != B)                             
        {
            grade[i][B] = grade[i-1][B] + 1;  
          
            if(grade[i][B] > grd)
            {
                grd = grade[i][B];
                student = B;
            }
        }
    }
    cout << grd << " " << student << endl;
}
