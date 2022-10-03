#include <iostream>
#include<math.h>
#include<fstream>

using namespace std;
int main()
{
    fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("reportcard.csv", ios::out | ios::app);
  
  
    int i, roll, phy, chem, math, bio;
    string name;
    int number_of_bottles ;
int number_of_prisoners ;
cin>>number_of_bottles ;
cin>>number_of_prisoners ;
int x1 =2;
for(int i=1;;i++)
{
    if(pow(i,number_of_prisoners)>number_of_bottles)
    {
        x1=i ;
        break ;
    }
}
cout<<x1<<'\n' ;
// cout<<pow(2,0)<<'\n' ;
for(int i=0;i<4;i++)
{
    int z=0 ;
    int z2=pow(x1,i) ;
    while(z<=number_of_bottles) 
    {
        int m=z2 ;
        while(m)
        {
            fout<<z<<',' ;
            
            z++ ;
            m--;
        }
        z+=z2 ;
        
    }
    fout<<'\n' ;
    
}

