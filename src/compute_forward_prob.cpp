/* 
 * File:                        compute_forward_prob.hpp
 * Author:                      Aline Castendiek
 * Student ID:                  768297
 * Date:                        16/10/16
 * 1st operating system:        Mac OS X [El Capitan 10.11.5]  
 * 2nd operating system:        Linux [Ubuntu 3.13]     
 * 1st Compiler:                clang [3.4]
 * 2nd Compiler:                g++ [4.8.4]
 * Doxygen version:             1.8.11          
 */



#ifndef __COMPUTE_FORWARD_PROB_CPP__
#define __COMPUTE_FORWARD_PROB_CPP__

#include <iostream>
#include "../include/HMM.hpp"

typedef std::vector<double> DoubleVector; ///< Vector of double values


int main(int argc, char* argv[])
{
   if (argc == 3) {

      /// HMM instance constructed from file in command line.
      /// Debug mode is set to false by default.
      HMM hmm(argv[1]);

      /// Set debugging parameter to true to enable debugging.
      // HMM hmm(argv[1], true);
      
      DoubleVector forward_probs = hmm.get_forward_probs(argv[2]);   
   }
   
   else {
      std::cerr <<
              "USAGE: compute_forward_prob hmm_file test_file\n\n"
              "hmm_file: File that contains the HMM. Several generated example models are located in /models.\n"
              "test_file: File that contains test sentences for which the forward probabilities shall be computed.\n\n";
      exit(1);
   }
   return 0;
}

#endif 
