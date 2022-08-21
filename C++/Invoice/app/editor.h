#ifndef EDITOR_H
#define EDITOR_H

#include <string>


class Editor {
private:
   std::string _doc;

public:
   Editor(std::string document);

   std::string read();
   void write(std::string text);
   void overwrite(std::string text);
};


#endif