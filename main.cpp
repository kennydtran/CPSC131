#include<iostream>
using namespace std;

void vect(vector<vector131>&);
void dispVect(const vector<vector131>&);

int main() {
  vector<vector131> uVector;
  vect(uVector);
  dispVect(uVector);
  
  return 0;
}

void vect(vector<vector131>& newVect) {
  int student;
  string sCourse;
  string sName;
  string sID;
  cout << "Plaese enter the number of students: ";
  cin >> student;
  
    for (int i = 0; i < student; i++) {
      cout << "Please enter the course: ";
      cin >> sCourse;
      cout << "Please enter the student name: ";
      cin >> sName;
      cout << "Please enter the student ID: ";
      cin >> sID;
    
      vector131 studentInfo(sCourse, sName, sID);
      newVect.push_back(studentInfo);
      }
}
  
  void dispVect(const vector<vector131>& newVect) {
    int vectorSize = newVect.size();
    cout << "Student information: \n";
      for (int i = 0; i < vectorSize; i++) {
        cout << "Course: " << newVect[i].getCourse() << "\n";
        cout << "Student name: " << newVect[i].getName() << "\n";
        cout << "Student ID: " << newVect[i].getID() << "\n";
      }
  }
      
