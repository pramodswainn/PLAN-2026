#include <bits/stdc++.h>

using namespace std;



int countDigit(int x){
    int count = 0;

    while(x!=0){
        if(x%10 !=0) {
          count++;
          x = x/10;

        }
    }
     return count;
}

int main(){
    //std::cout<<"Enter number :"<<std::endl;
    //int x;
    //std::cin>>x;

    int digitcnt =  countDigit(12345);

    std::cout<< digitcnt<<std::endl;
    return 0;
}
