#include <iostream>
using namespace std;
int arr [500]={2,3};
int a=2;


int LOPN (int c)
{ 
    if (c<=2)
        return 0;
    
    for (int j=3 ; j<=c ; j++) 
    {
        
        if (j * j >= c)
        {
            return (j-1) ;
        }    
            
    } 
}


int prime_number(int c)
{
    int arr1[1000]={};
    int b=0,i=2;
    for (int j = arr[1]+2 ; j<= c ; j=j+2)
    {
        if (j % arr[1] != 0 )
        {
            arr1[b] = j;
            b++;
        }
    }
    while (i<a)
    {
        
        for (int j = 0 ; j < b ; j++)
        {
            if (arr1[j] != 0 )
            {
                if (arr1[j] % arr[i] == 0)
                    arr1[j]=0 ;
            }
        }
        i++;
    }
    for (int j=0 ; j < b ; j++)
    {
        if (arr1[j] != 0 )
        {
            arr[a]=arr1[j];
            a++;
        }
    }
}


void main_use (int f)
{
    int c;
    c=LOPN (f);

    if (c != 0 )
    {
        main_use(c);
        prime_number(f);
    }
}


int main()
{
    int k;
    char result ='y';
    
    cout << "enter the range till which you want the prime number ";
    cin >> k;
    main_use(k);
    cout << "1  ";
    for (int i = 0 ;  i < a ; i++)
    {
        cout<< arr[i] << "  ";
    }
        
    return 0;
}