#include "consolewriter.hpp"
#include "constants.hpp"
#include <iostream>
#include "lpct.hpp"

namespace zinc
{
  namespace consoleWriter
  {
    using lc = lpct::colors;
    void 
    help_warning()
    {
      std::cerr << 
        get_colorstr(lc::red, std::string("Try ")) <<
        "'" << zinc::constants::programm_name <<
        " help' " << 
        get_colorstr(lc::green, std::string("for more information.")) <<
      std::endl;
    }

    void
    help()
    {
//      std::cout <<
//        get_colorstr(lc::
//      std::endl;

    }
  }
}

