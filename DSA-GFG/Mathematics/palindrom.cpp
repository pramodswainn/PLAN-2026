#include <bits/stdc++.h>

using namespace std;


int trailingZero(int n){
    if(n <0) return -1;

    if(n ==0 || n==1) return 0;
    int count =0 ;

    for(int i = 5; n/i >=1 ; i*=5){
        count += n/i;
    }

    return count;
}

int main(){

    //100! has how many trailing zeros
    int result = trailingZero(100);
    std::cout<< "No of trailing Zeros :"<< result <<std::endl;


    return 0;
}
