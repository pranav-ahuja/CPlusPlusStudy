#include <iostream>
#include <string.h>

using namespace std;

class Student{
    private:
        int rollNo;
        string name;
        int marks[3];

    public:
        int totalMarks;
        Student(int rollNo, string name)
        {
            this->name = name;
            this->rollNo = rollNo;
        }

        void setMarks(int *marks)
        {
            for(int i = 0; i<3; i++)
            {
                this->marks[i] = marks[i];
            }
        }

        int calculateTotalMarks();

        char grading();
};

int Student::calculateTotalMarks()
{
    for(int i = 0; i<3; i++)
    {
        totalMarks += this->marks[i];
    }
}

char Student::grading()
{
    if((totalMarks/100) > 90)
        return 'A';
    else if((totalMarks/100) > 75)
        return 'B';
    else if((totalMarks/100) > 60)
        return 'C';
}


int main()
{
    int marks[3] = {90,85,84};
    Student s1(1, "Pranav");

    s1.setMarks(marks);
    
    cout<<"Total marks : "<<s1.calculateTotalMarks()<<endl;
    cout<<"Grade is : "<<s1.grading();

    return 0;
}