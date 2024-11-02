#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string PIB;
    bool algebra;
    bool geometry;
    bool ukranian;
    bool english;
    bool polish;
    bool art;
    bool litrature_ukr;
    bool litrature_foreign;
    bool chemistry;
    bool physics;
};

Student Initialized(Student student)
{
    cout << "Enter PIB of student -> ";
    getline(cin, student.PIB);
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.algebra;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.geometry;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.ukranian;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.english;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.polish;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.art;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.litrature_ukr;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.litrature_foreign;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.chemistry;
    cout << "Is student pass the Algebra test?\n0)No 1)Yes\nEnter: ";
    cin >> student.physics;
    return student;
}

void Show(Student student)
{
    cout << student.PIB << endl;
    cout << student.algebra << endl;
    cout << student.geometry << endl;
    cout << student.ukranian << endl;
    cout << student.english << endl;
    cout << student.polish << endl;
    cout << student.art << endl;
    cout << student.litrature_ukr << endl;
    cout << student.litrature_foreign << endl;
    cout << student.chemistry << endl;
    cout << student.physics << endl;

}

Student AddNewStudent(Student students[], Student student, int index)
{
    students[index] = student;

}

void ShowMarks(Student student)
{
    cout << "Marks of this student" << endl;
    cout << student.algebra << endl;
    cout << student.geometry << endl;
    cout << student.ukranian << endl;
    cout << student.english << endl;
    cout << student.polish << endl;
    cout << student.art << endl;
    cout << student.litrature_ukr << endl;
    cout << student.litrature_foreign << endl;
    cout << student.chemistry << endl;
    cout << student.physics << endl;
}

void ShowDeptors(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].algebra != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].geometry != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].ukranian != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].english != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].polish != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].art != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].litrature_ukr != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].litrature_foreign != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].chemistry != true)
        {
            cout << "This student must to pass the exam";
        }
        else if (students[i].physics != true)
        {
            cout << "This student must to pass the exam";
        }
    }

}

int main()
{
    /*string path = "test.txt";
    fstream file(path, ios_base::out);
    file << "Hello world";
    file.swap(file);
    file.eof();
    if (file.is_open())
    {
        file << "Hello, World!";
        file << "Hello to you my dear friend";
        file.close();
    }
    ifstream ifile(path);
    string info;
    getline(ifile,info);
    cout << info << endl;*/
    Student Slava_Mokrynskyi;
    Slava_Mokrynskyi = Initialized(Slava_Mokrynskyi);
    Student Illia_Demediuk;
    Illia_Demediuk = Initialized(Illia_Demediuk);
    Student students[10] = {Slava_Mokrynskyi, Illia_Demediuk};
    Student* students_ptr = students;


}
