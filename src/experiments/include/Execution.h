#ifndef __EXECUTION_H__
#define __EXECUTION_H__
#include "BloomFilter.h"
#include <istream>
#include <string>
#include <vector>
#include <memory>
#include <unordered_set>
using namespace std;

class Execution {
public:
  // common result class
  struct Result {
    int test_size;
    double fp_ratio;
    double test_time;
  };
  
  // default constructor
  Execution(); 
  // init given bloomfilter with keys in stream
  Execution(BloomFilter * BF);
  
  double insertKeys(istream &keys);  
  Result execute(istream &test);
  
private:
  BloomFilter * BF;
  unordered_set<string> keys;
};

#endif