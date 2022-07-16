##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=competitive_programming
ConfigurationName      :=Debug
WorkspacePath          :=C:/CppLearning/CppLearning
ProjectPath            :=C:/CppLearning/CppLearning/competitive_programming
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Liyakhat yousuf
<<<<<<< HEAD
Date                   :=25/06/2022
=======
Date                   :=16/07/2022
>>>>>>> d488314 (third commit)
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="competitive_programming.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
<<<<<<< HEAD
Objects0=$(IntermediateDirectory)/Day-16.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/programming.cpp$(ObjectSuffix) $(IntermediateDirectory)/vectors.cpp$(ObjectSuffix) 
=======
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/programming.cpp$(ObjectSuffix) $(IntermediateDirectory)/competitve_two.cpp$(ObjectSuffix) $(IntermediateDirectory)/vectors.cpp$(ObjectSuffix) $(IntermediateDirectory)/Day-28.cpp$(ObjectSuffix) 
>>>>>>> d488314 (third commit)



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
<<<<<<< HEAD
$(IntermediateDirectory)/Day-16.cpp$(ObjectSuffix): Day-16.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Day-16.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Day-16.cpp$(DependSuffix) -MM Day-16.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/competitive_programming/Day-16.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Day-16.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Day-16.cpp$(PreprocessSuffix): Day-16.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Day-16.cpp$(PreprocessSuffix) Day-16.cpp

=======
>>>>>>> d488314 (third commit)
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/competitive_programming/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/programming.cpp$(ObjectSuffix): programming.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/programming.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/programming.cpp$(DependSuffix) -MM programming.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/competitive_programming/programming.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/programming.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/programming.cpp$(PreprocessSuffix): programming.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/programming.cpp$(PreprocessSuffix) programming.cpp

<<<<<<< HEAD
=======
$(IntermediateDirectory)/competitve_two.cpp$(ObjectSuffix): competitve_two.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/competitve_two.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/competitve_two.cpp$(DependSuffix) -MM competitve_two.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/competitive_programming/competitve_two.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/competitve_two.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/competitve_two.cpp$(PreprocessSuffix): competitve_two.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/competitve_two.cpp$(PreprocessSuffix) competitve_two.cpp

>>>>>>> d488314 (third commit)
$(IntermediateDirectory)/vectors.cpp$(ObjectSuffix): vectors.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/vectors.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/vectors.cpp$(DependSuffix) -MM vectors.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/competitive_programming/vectors.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vectors.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/vectors.cpp$(PreprocessSuffix): vectors.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/vectors.cpp$(PreprocessSuffix) vectors.cpp

<<<<<<< HEAD
=======
$(IntermediateDirectory)/Day-28.cpp$(ObjectSuffix): Day-28.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Day-28.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Day-28.cpp$(DependSuffix) -MM Day-28.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/competitive_programming/Day-28.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Day-28.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Day-28.cpp$(PreprocessSuffix): Day-28.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Day-28.cpp$(PreprocessSuffix) Day-28.cpp

>>>>>>> d488314 (third commit)

-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


