#include "alg.h"


int main(int argc, char const *argv[]){
// Fibbonaci check
    vector<int> try1 = {3,5,8,13,21,34};
    bool result = Fib(try1.begin(), try1.end());
    cout << result << endl;



//Transpose chehck
    vector<float> tryTranspose= {1.1,2.2,3.3,4.4,5.5,6.6};
    //int ia[] = {1,2,3,4,5,6,7,8};
    Transpose(tryTranspose.begin() , tryTranspose.end());
    // print
    for(int i=0; i<tryTranspose.size(); i++){
        cout << tryTranspose.at(i) << ",";
    }
    cout<<endl;



//Transform2 check
    vector<int> try3 ={1,2,3,3};
    vector<int> try4(10);
    Transform2(try3.begin(), try3.end(), try4.begin(), [](const int x, const int y){return x+y;});

    for(int i=0; i<try4.size(); i++){
        cout << try4.at(i) << ",";
    }
    return 0;
}

// operator overload to print the vector for check myself.
    std::ostream& operator<<(std::ostream& out, const vector<int>& vec){
        for (size_t i = 0; i < vec.size(); i++){
            out << vec.at(i) << ", ";
        }
        return out;
    }