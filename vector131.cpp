#include "vector.h"

vector131() {
  newID = 0;
  }
  
vector131(string course, string name, string id) {
  newCourse = course;
  newName = name;
  newID = id;
  }
  
  vector131::∼vector131() {}
  
  string getCourse() const {
    return newCourse;
  }
  
  string getName() const {
    return newName;
  }
  
  string getID() const {
    return newID;
  }
  
  
