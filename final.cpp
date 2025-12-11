#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;
int main(){
  //milestone 1
  map<string, int> traff;
  ifstream infile("210-final-1-FA25.txt");
  if(!infile){
    cout << "Error in opening file" << endl;
    return 1;
  }
  string loca, desti;
  while (infile >> loca >> desti) {

        if (traff.find(loca) == traff.end()) {
            traff[loca] = 0;
        }
        traff[loca]++;

        if (traff.find(desti) == traff.end()) {
            traff[desti] = 0;
        }
        traff[desti]++;
    }
  cout << "All airport traffic counts:" << endl;
  for (auto &p : traff) {
      cout << p.first << " " << p.second << endl;
  }
  //milestone 2
  int count = 0;
  for (auto &p : traff) {
        if (p.second > count) {
            count = p.second;
        }
    }
  cout << "The airporr with the most count " << count << " : " << endl;
  for (auto &p : traff) {
        if (p.second == count) {
            cout << p.first << " " << p.second << endl;
        }
    }
  return 0;
  
}

