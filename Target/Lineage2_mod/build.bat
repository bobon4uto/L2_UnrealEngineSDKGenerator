::cl /std:c++17 /EHsc /c .\Basic.cpp /Fo:build\
::cl /std:c++17 /EHsc /c .\Engine.cpp /Fo:build\
::cl /std:c++17 /EHsc /c .\Core.cpp /Fo:build\
cl /std:c++17 /EHsc /c .\Main.cpp /Fo:build\
link /DLL .\build\Main.obj .\build\Basic.obj .\build\Engine.obj .\build\Core.obj /OUT:mod.dll
