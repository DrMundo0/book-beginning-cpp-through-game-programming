aux_source_directory(. DIR_SRCS)

# build target 放到target目录中
add_executable(../target/a.out ${DIR_SRCS})
