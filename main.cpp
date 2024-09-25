#include <iostream>

class Car // определяю класс
{  
public:
    int power;
    int cylinder; // без параметров
    std::string mark;
    void info()
    {
        std::cout << "MARK: " << mark << "\tPOWER: " << power << "\tCYLINDERS: " << cylinder<< "\n";
    }
    Car(int x_cylinder, std::string x_mark, int x_power = 100) // с параметрами, по умолчанию
    {
        cylinder = x_cylinder;
        power = x_power;
        mark = x_mark;
    }
    int getPower(){ //Геттер
        return power;
    }
    void SetPower( int NewPower) // Сеттер
    {
        power = NewPower;
    }
};

class Lorry : public Car
{
public:
    int mass;
    void information()
    {
        std::cout << "MARK: " << mark << "\tPOWER: " << power << "\tCYLINDERS: " << cylinder<< "MASS" << mass << "\n";
    }
};
Lorry kamaz;
kamaz.power = 100;

int main()
{
    Car mers(8, "Mers", 200);
    mers.info();
    mers.mark = "Mersedes";
    mers.cylinder = 6;
    mers.info();
    std::cout<< mers.getPower()<< "\n";
    mers.SetPower(500);
    mers.info();
} // mers перестает существовать
