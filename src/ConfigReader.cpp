#include "ConfigReader.h"

#include "Constant.h"

#include <fstream>
#include <iostream>

using namespace std;

int ConfigReader::loadConfig(const string& filename, double &freq, double &speed,
			     double &rho, double &p0_real, double &p0_imag, Plain &inlet,
			    Plain &outlet) {
  string command;
  char buffer[256];
  
  ifstream input(filename.c_str());
  if (!input.is_open()) {
    return ERR_FILE_OPEN;
  }

  while (1) {
    input >> command;
    if (command == "freq:") {
      input >> freq;
    } else if (command == "speed:") {
      input >> speed;
    } else if (command == "rho:") {
      input >> rho;
    } else if (command == "p0_real:") {
      input >> p0_real;
    } else if (command == "p0_imag:") {
      input >> p0_imag;
    } else if (command == "inlet:") {
      double plain_coeff;
      for (int i=0; i<4; i++) { // 4 for a,b,c,d
	input >> plain_coeff;
	inlet[i] = plain_coeff;
      }
    } else if (command == "outlet:") {
      double plain_coeff;
      for (int i=0; i<4; i++) { // 4 for a,b,c,d
	input >> plain_coeff;
	outlet[i] = plain_coeff;
      }      
    } else if (command == "#") {
      input.getline(buffer, MAX_BUFFER_LEN);
    } else if (command == "end") {
      break;
    } else {
      return ERR_FILE_FORMAT;
    } 
  }

  return 0;
}
