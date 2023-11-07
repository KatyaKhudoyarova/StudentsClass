#include <vector>
#include <iostream>

using namespace std;

//Задаємо батьківський клас Особи

class Person {
protected:
    unsigned long int id; //РНОКПП
    string name; //ім'я
    string surname; //фамілія
    string pasnumber; //номер паспорту    
    string dateofbirth; //дата народження

public:
    Person() {

    }
    Person(unsigned long int id, string name, string surname, string pasnumber, string dateofbirth) {
        this->id = id;
        this->name = name;
        this->surname = surname;
        this->pasnumber = pasnumber;
        this->dateofbirth = dateofbirth;

    }
    ~Person() {

    }

    void ShowInfo() {
        cout << "Personal number:" << id<<"\n";
        cout << "Name:" << name << "\n";
        cout << "Surname:" << surname << "\n";
        cout << "Passport number:" << pasnumber << "\n";
        cout << "Date of birth:" << dateofbirth << "\n";


}

    void Set(unsigned long int id, string n, string s, string p, string d) {
        this->id = id;
        this->name = n;
        this->surname = s;
        this->pasnumber = p;
        this->dateofbirth = d;
}

};
//Робимо дочірний клас Студента

class Student : public Person {
protected:
    string university;     // навчальний заклад
    string specialty;  // спеціальність
    string group; //група навчання

public:
    Student(unsigned long int id, string name, string surname, string pasnumber, string dateofbirth, string university, string speciality, string group) 
        :Person(id, name, surname, pasnumber, dateofbirth)
    {
        this->university = university;
        this->specialty = speciality;
        this->group = group;
    }
    ~Student() {

    }

    void ShowInfo() {
        Person:: ShowInfo();
        cout << "University:" << university << "\n";
        cout << "Specialty:" << specialty << "\n";
        cout << "Group:" << group << "\n";

}
    void Set(string un, string sp, string gr) {
        this->university = un;
        this->specialty = sp;
        this->group = gr;
       
    }

};

int main()
{
    vector <Student> students;
    students.emplace_back(1234567890, "Kate", "Khudoyarova", "KP000000", "27.12.2005", "DUIKT", "Information System Technology", "22");
    students.emplace_back(2233445566, "Olha", "Yamshanova", "KP111111", "04.11.2004", "Collegiume", "Marketologia", "1");
    students.emplace_back(1144880099, "Nastia", "Shablya", "KP222222", "01.11.2005", "DUIKT", "IST", "21");
    
     for (auto it = students.begin(); it!= students.end( ); it++) {
        it->ShowInfo();
            cout<<"\n";
    }
    
}

    

   


