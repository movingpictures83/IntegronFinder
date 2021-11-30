#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "IntegronFinderPlugin.h"

void IntegronFinderPlugin::input(std::string file) {
 inputfile = file;
}

void IntegronFinderPlugin::run() {
   
}

void IntegronFinderPlugin::output(std::string file) {
 // spades.py -o 02_IntegronFinder -1 $1 -2 $2 --careful
 // assembly-stats -t ./All_assemblies/*.fasta > ./All_assemblies/00_Metrics_all_assemblies.txt
 //integron_finder Short.SPAdes.fasta --func_annot --local_max --path_func_annot bank_hmm --outdir hello
	std::string command = "integron_finder "+inputfile+" --func_annot --local_max --path_func_annot bank_hmm --outdir "+file+"; cp "+file+"/Results_Integron_Finder_input/other/* "+file+"/../";
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<IntegronFinderPlugin> IntegronFinderPluginProxy = PluginProxy<IntegronFinderPlugin>("IntegronFinder", PluginManager::getInstance());
