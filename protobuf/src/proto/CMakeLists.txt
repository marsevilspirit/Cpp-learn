find_package(Protobuf REQUIRED)
FILE(GLOB protofiles "${CMAKE_CURRENT_SOURCE_DIR}/*.proto")
message(STATUS ${protofiles})
PROTOBUF_GENERATE_CPP(PROTOSRCS PROTOHDRS ${protofiles})
message(STATUS ${PROTOSRCS})
add_library(proto STATIC ${PROTOSRCS} ${PROTOHDRS}) 
target_link_libraries(proto protobuf) 
target_include_directories(proto PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

