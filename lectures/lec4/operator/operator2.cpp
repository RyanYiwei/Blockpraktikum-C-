#include <iostream>

class date{
private:
    int year;
    int month;
    int day;
public:
    date(int y, int m, int d):year(y), month(m), day(d){}
    int getYear() const { return year;}
    int getMonth() const { return month; }
    int getDay() const { return day; }

};

// 在const作用域内调用类中非const的方法会报错
// 所以类中的这几个getter必须以const来修饰
bool operator==(const date &d1, const date &d2){
    return (d1.getDay()==d2.getDay() && 
            d1.getMonth()==d2.getMonth() && 
            d1.getYear() == d2.getYear());
}

std::ostream & operator<<(std::ostream & os, const date &d){
    os << "on "<< d.getYear()<<"."<< d.getMonth()<<"."<< d.getDay()<<std::endl;
    return os;

}

int main(){
    date d1(2024, 11, 20);
    date d2(2024, 11, 20);
    date d3(2023, 11, 20);
    std::cout << d1;
    std::cout << (d1==d2) <<std::endl;
    std::cout << (d1==d3) <<std::endl;
}

