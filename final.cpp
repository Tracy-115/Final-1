#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;
int main(){
  map<string, int> traff;
  ifstream infile("210-final-1-FA25.txt");
  if(!infile){
    cout << "Error in opening file" << endl;
  }
  string loca, desti;
  while (infile >> loca >> desti) {

        if (traff.find(loca) = traffic.end()) {
            traff[loca] = 0;
        }
        traff[loca]++;

        if (trafffind(desti) = traffc.end()) {
            traff[desti] = 0;
        }
        traff[desti]++;
    }
  cout << "All airport traffic counts:" << endl;
  for (auto &p : traff) {
      cout << p.first << " " << p.second << endl;
  }
  
}

