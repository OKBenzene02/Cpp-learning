##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DSA_using_Cplusplus
ConfigurationName      :=Debug
WorkspacePath          :=C:/CppLearning/CppLearning
ProjectPath            :=C:/CppLearning/CppLearning/DSA_using_Cplusplus
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Liyakhat yousuf
Date                   :=25/06/2022
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
ObjectsFileList        :="DSA_using_Cplusplus.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/DSA_trees.cpp$(ObjectSuffix) $(IntermediateDirectory)/DSA_examples.cpp$(ObjectSuffix) $(IntermediateDirectory)/Sorting_Algo.cpp$(ObjectSuffix) $(IntermediateDirectory)/miscellaneous.cpp$(ObjectSuffix) $(IntermediateDirectory)/Graphs_in_dsa.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/DSA_using_Cplusplus/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/DSA_trees.cpp$(ObjectSuffix): DSA_trees.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DSA_trees.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DSA_trees.cpp$(DependSuffix) -MM DSA_trees.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/DSA_using_Cplusplus/DSA_trees.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DSA_trees.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DSA_trees.cpp$(PreprocessSuffix): DSA_trees.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DSA_trees.cpp$(PreprocessSuffix) DSA_trees.cpp

$(IntermediateDirectory)/DSA_examples.cpp$(ObjectSuffix): DSA_examples.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DSA_examples.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DSA_examples.cpp$(DependSuffix) -MM DSA_examples.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/DSA_using_Cplusplus/DSA_examples.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DSA_examples.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DSA_examples.cpp$(PreprocessSuffix): DSA_examples.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DSA_examples.cpp$(PreprocessSuffix) DSA_examples.cpp

$(IntermediateDirectory)/Sorting_Algo.cpp$(ObjectSuffix): Sorting_Algo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Sorting_Algo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Sorting_Algo.cpp$(DependSuffix) -MM Sorting_Algo.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/DSA_using_Cplusplus/Sorting_Algo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Sorting_Algo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Sorting_Algo.cpp$(PreprocessSuffix): Sorting_Algo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Sorting_Algo.cpp$(PreprocessSuffix) Sorting_Algo.cpp

$(IntermediateDirectory)/miscellaneous.cpp$(ObjectSuffix): miscellaneous.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/miscellaneous.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/miscellaneous.cpp$(DependSuffix) -MM miscellaneous.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/DSA_using_Cplusplus/miscellaneous.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/miscellaneous.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/miscellaneous.cpp$(PreprocessSuffix): miscellaneous.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/miscellaneous.cpp$(PreprocessSuffix) miscellaneous.cpp

$(IntermediateDirectory)/Graphs_in_dsa.cpp$(ObjectSuffix): Graphs_in_dsa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Graphs_in_dsa.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Graphs_in_dsa.cpp$(DependSuffix) -MM Graphs_in_dsa.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/CppLearning/CppLearning/DSA_using_Cplusplus/Graphs_in_dsa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Graphs_in_dsa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Graphs_in_dsa.cpp$(PreprocessSuffix): Graphs_in_dsa.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Graphs_in_dsa.cpp$(PreprocessSuffix) Graphs_in_dsa.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


