# UEOpenCV

Modify your PublicDependencies in your base module's (or whatever module you want to call OpenCV from) Build.cs to include UEOpenCV. Example:
```
PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UEOpenCV"}); )
```
Don't forget to include it in your project's Target.cs file's ExtraModuleNames as well:
```
ExtraModuleNames.AddRange( new string[] { "MyBaseModule", "UEOpenCV"} ); ).
```
To use, just call OpenCV's headers directly as so:
```
#include "opencv2/core.hpp" 
```
