#ifndef INTEGRONFINDERPLUGIN_H
#define INTEGRONFINDERPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class IntegronFinderPlugin : public Plugin
{
public: 
 std::string toString() {return "IntegronFinder";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
