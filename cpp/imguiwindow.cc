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

/*
GENERATED CODE | READ-ONLY
Copy by clicking the above button
*/
void setupwindow(){
static bool window = true;
ImGui::SetNextWindowSize(ImVec2(693,615));
//!! You might want to use these ^^ values in the OS window instead, and add the ImGuiWindowFlags_NoTitleBar flag in the ImGui window !!

if (ImGui::Begin("window_name", &window))
{

	ImGui::SetCursorPos(ImVec2(311,494.5));
	ImGui::Button("let's go!", ImVec2(71,19)); //remove size argument (ImVec2) to auto-resize

	ImGui::SetCursorPos(ImVec2(269.5,22.5));
	ImGui::Text("Welcome to Pythonic-OS");

	ImGui::SetCursorPos(ImVec2(308,49.5));
	ImGui::Text("Version 1.0");

	ImGui::SetCursorPos(ImVec2(188.5,96.5));
	ImGui::Text("operating system a better place for everyone!");

	ImGui::SetCursorPos(ImVec2(94,213.5));
	ImGui::Text("this can be customised but is usualy in ~/logs based on the user account");

	ImGui::SetCursorPos(ImVec2(139.5,250.5));
	ImGui::Text("do you want a terminal to setup the OS while you read this?");

	ImGui::SetCursorPos(ImVec2(87,183.5));
	ImGui::Text("do you wish to log issues with the operating system to the log's directory");

	ImGui::SetCursorPos(ImVec2(55.5,67.5));
	ImGui::Text("i just want to ask you a few questions before we get started so i can bet make this");

	ImGui::SetCursorPos(ImVec2(10,291.5));
	ImGui::Text("this provides the ability to use commands such as nano to change settings, vim if nano aint good");

	ImGui::SetCursorPos(ImVec2(605.5,181.5));
	static bool c130 = false;
	ImGui::Checkbox("log?", &c130);

	ImGui::SetCursorPos(ImVec2(559.5,247.5));
	if (ImGui::Button("summon term!", ImVec2(92,19))) //remove size argument (ImVec2) to auto-resize
  {
    // spawn a xterm window
    system("xterm"); 
  }
	ImGui::SetCursorPos(ImVec2(231,328.5));
	ImGui::Text("and our official package manager!");

  if (c130 == true ) {
    // write to a config file
    ofstream myfile;
    myfile.open ("/home/PythonicOS.cfg");
    myfile << "setup = true" << endl;
    myfile.close();
	}

	}

}
ImGui::End();


/*
Reminder: some widgets may have the same label "##" (if you didn't change it), and can lead to undesired ID collisions.
More info: https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#q-about-the-id-stack-system
*/

}
