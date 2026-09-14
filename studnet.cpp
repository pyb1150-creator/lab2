 #include "student.h"
 namespace ParkYeonBin2693117
 {
 student inputStudent();
    {
        student s{};
        std::cout<<"Enter id:";
        std::cin>>s.id;
        std::cout<<"Enter score: ";
        std::cin>>s.score;
        return s;
    }
    void printStudent(const student &s)//pass-by reference
    {
        std::cout << "Studnet ID: "<<s.id<<std::ends;
        std::cout << "Score: "<<s.score<<"points\n";
    }
}
