#include "student.h"

int main()
{
    using namespace ParkYeonBin2693117;
    student s1{inputStudent()};
    printStudent(s1);

    student s2{inputStudent()};
    printStudent(s2);

    return 0;
}