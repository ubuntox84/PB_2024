#include <iostream>
#include <cmath>
using namespace std;
class perro{
    private:
    string nombre;
    int edad;
    string raza;
    public:
    /*
    perro(string n, int e, string r){
        this->nombre=n;
        this->edad=e;
        this->raza=r;
    }*/
    perro(string n, int e, string r):nombre(n),edad(e),raza(r){}
    void setnombre(string n){
        this->nombre=n;
    }
    void setedad(int e){
        this->edad=e;
    }
    void setraza(string r){
        this->raza=r;
    }
    string getnombre(){
        return this->nombre;
    }
    int getedad(){
        return this->edad;
    }
    string getraza(){
        return this->raza;
    }
};
int main()
{
    perro p1 ("duke",7,"coker");
    /*
    p1.setnombre("duke");
    p1.setedad(7);
    p1.setraza("Coker");*/
    cout<<p1.getnombre()<<endl;
    cout<<p1.getedad()<<endl;
    cout<<p1.getraza()<<endl;
}