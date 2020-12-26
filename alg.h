#include <algorithm>
#include <string>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

// function that init fibbonaci series
vector<int> fib(){
    int fib1=1;
    int fib2=1;
    int fib3=1;
    vector<int> fibo;
    fibo.push_back(fib1);
    fibo.push_back(fib2);

    for(int i=0; i<20; i++){
        fib3=fib1+fib2;
        fib1=fib2;
        fib2=fib3;
        fibo.push_back(fib3);
    }
    return fibo;
}

//vector that contains fibbonaci series
vector<int> check = fib();


// Fib algorithm
template <typename iterator>
bool Fib(iterator begin, iterator end){
    for(begin; begin!=end; ++begin){
        for(int j=0; j<check.size()-1; ++j){
            if(*begin == check.at(j)){
                if(begin==end-1){   // maybe ill need here While() to check all over the fibo..
                    return true;
                }
                ++begin;
            }
        }
    }
    return false;
}



// Transpose algorithm
template <typename iterator, typename iterator2>
iterator Transpose(iterator ibegin, iterator2 iend){
    int count = 0;
    iterator check=ibegin;
    while(check!=iend){
        ++count;
        ++check;
    }
    if(count % 2 == 0 && count != 0){
        while(ibegin != iend){
            auto temp = *ibegin;
            *ibegin = *(ibegin+1);
            *(ibegin+1) = temp;
            ibegin = ibegin+2;
        }
        return iend;
    }else{
        return ibegin;
    }
}


// Transform2 algorithm
template <typename iterator, typename iterator2, typename Predicet>
iterator2 Transform2(iterator ibegin, iterator iend, iterator2 ibegin2, Predicet f){
    int count = 0;
    iterator check=ibegin;
    while(check!=iend){
        ++count;
        ++check;
    }
    if(count % 2 == 0){   // Even length of variables in the first container
        while(ibegin!=iend){
            *ibegin2 = f(*ibegin,*(ibegin+1));
            ibegin = ibegin+2;
            ++ibegin2;
        }
        return ibegin2;
    }else{  // Odd length of variables in the first conatainer
            while(ibegin!=iend-1){  // iend-1 beacause of - without the last number..
            *ibegin2 = f(*ibegin,*(ibegin+1));
            ibegin = ibegin+2;
            ++ibegin2;
        }
        return ibegin2;
    }
}