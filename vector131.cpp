#include "vector.h"

vector131::vector131() {
  newID = 0;
  }
  
vector131::vector131(string course, string name, string id) {
  newCourse = course;
  newName = name;
  newID = id;
  }
  
  vector131::∼vector131() {}
  
  string vector131::getCourse() const {
    return newCourse;
  }
  
  string vector131::getName() const {
    return newName;
  }
  
  string vector131::getID() const {
    return newID;
  }
  
  
