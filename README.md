# Practical Assignment 3
## Problem 3.1
### OBJ Scene loader (Points 30)
Until now we have only hardcoded our scene descriptions in main.cpp. This is of course not practical. In the new framework, a method ```CScene::ParseOBJ()``` is added to the class ```CScene```, in order to load a scene-description from an obj-file. To make the method work proceed as follows:
1. Fork the current repository
2. Have a look at the file cow.obj. Study how triangles are stored in the obj-format. The _v_ ’s indicate a single 3d-vertex position, and the _f_ ’s (faces) are indecies to 3 vertex numbers a triangle consits of (please note that the face indecies are starting with **1 and not 0**).
3. Implement the missing parts of the ParseOBJ-method.
Test your implementation with cow.obj. If your obj-importer works as expected you should see an image of a cow like this:

![]()

**Hint:** The obj file-format can be dumped out from various 3d-modelers. Nevertheless, the output might differ from modeler to modeler and there are also other tokens like _vn_ for vertex normals or _vt_ for texture coordinates. Check
[obj file format](https://www.cs.cmu.edu/~mbz/personal/graphics/obj.html) for a full description. 

## Problem 3.2
### Implementation of a kd-tree acceleration structure (Points 70)
