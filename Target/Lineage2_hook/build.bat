cl /std:c++17 /EHsc /c .\Basic.cpp /Fo:build\
cl /std:c++17 /EHsc /c .\Engine.cpp /Fo:build\
cl /std:c++17 /EHsc /c .\Core.cpp /Fo:build\
cl /std:c++17 /DCUSTOM_MOD_DLL_PATH=\"D:\\probe\\lineage2\\L2_UnrealEngineSDKGenerator\\Target\\Lineage2_mod\\mod.dll\"  /EHsc /c .\Main.cpp /Fo:build\
link /DLL .\build\Main.obj .\build\Basic.obj .\build\Engine.obj .\build\Core.obj /OUT:hook.dll
