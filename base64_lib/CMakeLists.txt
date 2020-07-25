file(GLOB_RECURSE  SOURCES *.h *.cc)
message(${SOURCES})

add_library(base STATIC ${SOURCES})
