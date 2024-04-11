#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>

#include <iostream>
#include <vector>
#include <dirent.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;
string homedir = "/home/csan";

vector<string> loadfiles(){
  // take the homedir and render a "file explorer view"
  DIR *dir;
  struct dirent *ent;
  if ((dir = opendir (homedir.c_str())) != NULL) {
    while ((ent = readdir (dir)) != NULL) {
      cout << ent->d_name << endl;
    }
    closedir (dir);
  } else {
    perror ("woops ");
  }
  return vector<string>();

}