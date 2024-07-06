/*
#include<iostream>
using namespace std;
class student {

    private:
    string name;
    int age;
    int height;

    public:
    int getAge() {
        return this->age;
    }
};
int main(){
    student first;
    return 0;

}

*/


#include<iostream>
using namespace std;
class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this -> age;

    }
    int setWeight(int w){
        this -> weight = w; 

    }


};
int main(){}
