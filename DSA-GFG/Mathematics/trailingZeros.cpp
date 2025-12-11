#include <bits/stdc++.h>

using namespace std;

int findTrailingZeros(int n){
    if(n < 0) return -1;

    if(n ==0 || n ==1) return 0; // factorial will be 1 

    int count = 0;

    for(int  i =5 ; n/i >=1 ; i=i*5)
    {
        count += n/i;
    }

    return count;

}

int main()
{

    int input  = 100;
    int trailzeros = findTrailingZeros(input);

    std::cout<<"Trailing Zeros :" << trailzeros <<std::endl;


    return 0;
}
