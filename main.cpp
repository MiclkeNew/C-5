#include <iostream>
#include <string>

class Car
{  
private:
    static int count;
public:
    Car() 
    { 
    count = ++count; 
    } 
    ~Car() 
    { 
    --count; 
    } 
    void getCount(){
        std::cout << "V klasse " << count << " ob_ektov\n";
    }
    int power;
    int cylinder;
    std::string mark;

    // Конструктор с параметрами и значением по умолчанию
    Car(int x_cylinder, std::string x_mark, int x_power = 100)
        : cylinder(x_cylinder), mark(x_mark), power(x_power) {}

    void info()
    {
        std::cout << "MARK: " << mark << "\tPOWER: " << power << "\tCYLINDERS: " << cylinder << "\n";
    }

    int getPower() // Геттер
    { 
        return power; 
    }

    void setPower(int newPower) // Сеттер
    {
        power = newPower;
    }
};
int Car::count=0;
class Lorry : public Car
{
public:
    int mass;

    // Конструктор для класса Lorry
    Lorry(int x_cylinder, std::string x_mark, int x_power, int x_mass)
        : Car(x_cylinder, x_mark, x_power), mass(x_mass) {}

    void info()
    {
        std::cout << "MARK: " << mark << "\tPOWER: " << power << "\tCYLINDERS: " << cylinder << "\tMASS: " << mass << "\n";
    }
};

int main()
{
    Car mers(8, "Mers", 200);
    mers.getCount();
    mers.info();
    mers.mark = "Mercedes";
    mers.cylinder = 6;
    mers.info();
    std::cout << mers.getPower() << "\n";
    mers.setPower(500);
    mers.info();

    // Создаем объект класса Lorry
    Lorry kamaz(6, "Kamaz", 300, 5000);
    kamaz.info();
    kamaz.setPower(100); // Изменение мощности
    kamaz.info();
    return 0;
}