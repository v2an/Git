#include <iostream>
#include "Domashka7.pb.h"

int main()
{
    FullName PetyaN;
    PetyaN.set_name("Petya");
    PetyaN.set_surename("Petrov");
    PetyaN.set_fathername("Petrovich");
    Student PetyaS;
    PetyaS.set_allocated_nameofstudent(&PetyaN);
    int PetyaGrades[]{5, 4, 3, 2, 5, 3, 4, 5};
    for (int i : PetyaGrades)
    {
        PetyaS.add_grades(PetyaGrades[i]);
    }
    PetyaS.set_avrggrades(3.875);
    StudentGroup Class1;
    Class1.add_studentgrp();
    Class1.mutable_studentgrp(1)->CopyFrom(PetyaS);
    std::cout << Class1.mutable_studentgrp(1)->avrggrades() << std::endl;
}
