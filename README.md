# qtcreator_additions
Here you can find various templates, plugins, configuration files etc. for QtCreator. I will try to update it as often as possible as long as I see something fit to be converted into a part of QtCreator. In the long run I am hoping to even create a ROS-dedicated (ROS = Robot Operating System) version of the IDE.

List of additions
* **opencvcppapp-cmake** (template wizard) - creates the bare minimum for a fully functional OpenCV application (including OpenCV's highgui module) using CMake

## Templates
According to the type of template you should copy the folder containing all necessary files to /usr/share/qtcreator/templates.

For example take **opencvcppapp-cmake**. It is a wizard for creating new C++ projects using OpenCV and CMake. Because it is a wizard you should copy the opencvcppapp-cmake to /usr/share/qtcreator/templates/wizards/
