#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int random{};
    size_t count{10};
    int min{1};
    int max{10};

    cout << "Random Number on my system is : " << RAND_MAX << endl;
    srand(time(nullptr));
    for (size_t i =0; i<count;i++){
        random=rand()%max+min;
        cout << random << endl;

    }

    cout << endl;



    return 0;
         }
