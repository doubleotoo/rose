
include_directories(${KDE4_INCLUDES} ${KDE4_INCLUDE_DIR} ${QT_INCLUDES} )


########### next target ###############


########### install files ###############

install(FILES  ArrayAnnot.h ArrayInterface.h ArrayRewrite.h  DESTINATION ${INCLUDE_INSTALL_DIR})



#original Makefile.am contents follow:

## Liao, 11/14/2008, Moved from project/arrayOptimization
#include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs
#
#INCLUDES = $(ROSE_INCLUDES)
#
#noinst_LTLIBRARIES=libarrayOptimization.la
#
#libarrayOptimization_la_SOURCES = \
#  ArrayAnnot.C ArrayInterface.C ArrayRewrite.C 
#
#include_HEADERS = \
#   ArrayAnnot.h ArrayInterface.h ArrayRewrite.h 
#
#clean-local:
#	rm -rf Templates.DB ii_files ti_files core
#
#EXTRA_DIST = 
#   
#
#
