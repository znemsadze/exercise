#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/PARTY/BSTParlament.o \
	${OBJECTDIR}/PARTY/NewYearTransportiation.o \
	${OBJECTDIR}/PARTY/NonYekaterinburgSubway.o \
	${OBJECTDIR}/PARTY/Party.o \
	${OBJECTDIR}/PARTY/TopologicalSorting.o \
	${OBJECTDIR}/PARTY/dirt_snapshot.o \
	${OBJECTDIR}/PARTY/jobbery.o \
	${OBJECTDIR}/eolimp/Solved.o \
	${OBJECTDIR}/eolimp/eolimp1.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/timus/Grafs.o \
	${OBJECTDIR}/unionfind/AnansisCobweb.o \
	${OBJECTDIR}/unionfind/RoadsNotOnlyinBerland.o \
	${OBJECTDIR}/unionfind/TwoSets.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/exercise

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/exercise: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/exercise ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/PARTY/BSTParlament.o: PARTY/BSTParlament.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/BSTParlament.o PARTY/BSTParlament.cpp

${OBJECTDIR}/PARTY/NewYearTransportiation.o: PARTY/NewYearTransportiation.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/NewYearTransportiation.o PARTY/NewYearTransportiation.cpp

${OBJECTDIR}/PARTY/NonYekaterinburgSubway.o: PARTY/NonYekaterinburgSubway.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/NonYekaterinburgSubway.o PARTY/NonYekaterinburgSubway.cpp

${OBJECTDIR}/PARTY/Party.o: PARTY/Party.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/Party.o PARTY/Party.cpp

${OBJECTDIR}/PARTY/TopologicalSorting.o: PARTY/TopologicalSorting.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/TopologicalSorting.o PARTY/TopologicalSorting.cpp

${OBJECTDIR}/PARTY/dirt_snapshot.o: PARTY/dirt_snapshot.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/dirt_snapshot.o PARTY/dirt_snapshot.cpp

${OBJECTDIR}/PARTY/jobbery.o: PARTY/jobbery.cpp 
	${MKDIR} -p ${OBJECTDIR}/PARTY
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PARTY/jobbery.o PARTY/jobbery.cpp

${OBJECTDIR}/eolimp/Solved.o: eolimp/Solved.cpp 
	${MKDIR} -p ${OBJECTDIR}/eolimp
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eolimp/Solved.o eolimp/Solved.cpp

${OBJECTDIR}/eolimp/eolimp1.o: eolimp/eolimp1.cpp 
	${MKDIR} -p ${OBJECTDIR}/eolimp
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eolimp/eolimp1.o eolimp/eolimp1.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/timus/Grafs.o: timus/Grafs.cpp 
	${MKDIR} -p ${OBJECTDIR}/timus
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/timus/Grafs.o timus/Grafs.cpp

${OBJECTDIR}/unionfind/AnansisCobweb.o: unionfind/AnansisCobweb.cpp 
	${MKDIR} -p ${OBJECTDIR}/unionfind
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/unionfind/AnansisCobweb.o unionfind/AnansisCobweb.cpp

${OBJECTDIR}/unionfind/RoadsNotOnlyinBerland.o: unionfind/RoadsNotOnlyinBerland.cpp 
	${MKDIR} -p ${OBJECTDIR}/unionfind
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/unionfind/RoadsNotOnlyinBerland.o unionfind/RoadsNotOnlyinBerland.cpp

${OBJECTDIR}/unionfind/TwoSets.o: unionfind/TwoSets.cpp 
	${MKDIR} -p ${OBJECTDIR}/unionfind
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/unionfind/TwoSets.o unionfind/TwoSets.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/exercise

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
