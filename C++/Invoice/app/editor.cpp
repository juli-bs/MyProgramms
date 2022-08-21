#include "editor.h"

#include <fstream>

using namespace std;


Editor::Editor(string document) : _doc(document) {
}

string Editor::read() {
   fstream reader(_doc, ios::in);

   string text, line;
   while(getline(reader, line)) {
      text += line;
   }

   reader.close();
   return text;
}

void Editor::write(string text) {
   fstream writer(_doc, ios::app);
   writer << text;
   writer.close();
}

void Editor::overwrite(string text) {
   fstream writer(_doc, ios::out);
   writer << text;
   writer.close();
}