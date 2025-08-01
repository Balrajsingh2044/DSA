#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vec(4,1);

    vec.push_back(24);
    vec.push_back(34);
    vec.push_back(45);

    cout << "Size after push = " << vec.size()<<endl;
    
    cout << "Front Element : " << vec.front() << endl;
    cout << "Back Element : " << vec.back() << endl;
    
    vec.pop_back();


    cout << "Value at 3 index point : " << vec.at(3) << endl;
    for(int i : vec){
        cout << i << endl;
    }


    return 0;
}