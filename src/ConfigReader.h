#ifndef __CONFIGREADER_H__
#define __CONFIGREADER_H__

#include "Object.h"

#include <string>

class ConfigReader {
private:
  static const int MAX_BUFFER_LEN = 256;
  
public:
  int loadConfig(const std::string &filename, double &freq, double &speed,
	       double &rho, double &p0_real, double &p0_imag, Plain &inlet,
                Plain &outlet);
};

#endif
