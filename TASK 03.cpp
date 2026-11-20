#include <iostream>
using namespace std;

class Assessment {
public:
    virtual void calculateMarks() = 0;  
};

class Quiz : public Assessment {
private:
    int marks;

public:
    Quiz(int m) {
        marks = m;
    }

    void calculateMarks() override {
        cout << "Quiz Marks: " << marks << endl;
    }
};

class Assignment : public Assessment {
private:
    int marks;

public:
    Assignment(int m) {
        marks = m;
    }

    void calculateMarks() override {
        cout << "Assignment Marks: " << marks << endl;
    }
};

class Marks {
private:
    int value;

public:
    Marks(int v) {
        value = v;
    }

    Marks operator+(Marks m) {
        return Marks(value + m.value);
    }

    void display() {
        cout << "Total Assessment Marks: " << value << endl;
    }
};

int main() {
    Quiz quiz(15);
    Assignment assignment(25);

    Marks quizMarks(15);
    Marks assignmentMarks(25);

    quiz.calculateMarks();
    assignment.calculateMarks();

    Marks total = quizMarks + assignmentMarks;
    total.display();

    return 0;
}
