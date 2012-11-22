#ifndef ROSE_SAGESUPPORT_CMDLINE_H
#define ROSE_SAGESUPPORT_CMDLINE_H

/**
 * \file    cmdline.h
 * \author  Justin Too <too1@llnl.gov>
 * \date    April 4, 2012
 */

/*-----------------------------------------------------------------------------
 *  Dependencies
 *---------------------------------------------------------------------------*/
// tps (01/14/2010) : Switching from rose.h to sage3.
#include "sage_support.h"

namespace SageSupport {
namespace Cmdline {

  static void
  makeSysIncludeList(const Rose_STL_Container<string> &dirs,
                     Rose_STL_Container<string> &result);

  namespace Java {
    static std::string option_prefix = "-rose:java:";

    // Returns a list of file names extracted from @filelist.
    // @filelist includes the leading '@'.
    Rose_STL_Container<std::string>
    ExpandFilelist (const std::string& filelist);

    // Return a copy of argv with Java's @filelist expanded in-place
    // with the actual filenames in the specified file.
    Rose_STL_Container<std::string>
    ExpandFilelist (const Rose_STL_Container<std::string>& argv);

    namespace Project {
      void
      Process (SgProject* project, std::vector<std::string>& argv);

// TODO: logic is the same for tokenized or string arguments
//       so refactor to use single functions

      // -classpath
      void
      ProcessClasspath (SgProject* project, std::vector<std::string>& argv);

      // -d
      void
      ProcessDestdir (SgProject* project, std::vector<std::string>& argv);

      // -encoding
      void
      ProcessEncoding (SgProject* project, std::vector<std::string>& argv);

      // -rose:java
      void
      ProcessJavaOnly (SgProject* project, std::vector<std::string>& argv);

      // -source
      void
      ProcessSource (SgProject* project, std::vector<std::string>& argv);

      // -sourcepath
      void
      ProcessSourcepath (SgProject* project, std::vector<std::string>& argv);

      // -source
      void
      ProcessSource (SgProject* project, std::vector<std::string>& argv);

      // -target
      void
      ProcessTarget (SgProject* project, std::vector<std::string>& argv);
    } // namespace SageSupport::Cmdline::Java::Project

    namespace File {
      void
      Process (SgFile* file, std::vector<std::string>& argv);
    } // namespace SageSupport::Cmdline::Java::File
  } // namespace SageSupport::Cmdline::Java

  // @filename used by Java
  std::vector<std::string>
  GetListFromFile (const std::string& filename);

} // namespace SageSupport::Cmdline
} // namespace SageSupport
#endif // ROSE_SAGESUPPORT_CMDLINE_H

