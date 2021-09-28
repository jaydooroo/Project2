#include "Lexer.h"
#include <fstream>
#include <iostream>
#include <vector>
#include "Parser.h"

using namespace std;

int main(int argc, char** argv) {

    if(argc < 2) {
        cerr << "Please provides name of input and output files";
        return 1;
    }

    ifstream in(argv[1]);
    if(!in) {
        cerr <<"Unable to open " << argv[1] << " for input";
        return 2;
    }


    std::istreambuf_iterator<char> eos;
    std::string inputString(std::istreambuf_iterator<char>(in), eos);


    Lexer* lexer = new Lexer();

    lexer->Run(inputString);

    Parser parser(lexer->returnTokens());
       string tempString = parser.datalogParse();

   if(tempString == "Success!"){
        cout << tempString << std::endl;
        parser.printDatalog();
    }
    else {
        cout << tempString << std::endl;
    }



  //cout << lexer->toString();
  //  cout <<"Total Tokens = " << lexer->totalToken();

    // TODO

    delete lexer;

    return 0;
}