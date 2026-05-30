aux_source_directory(. DIR_SRCS)

# 添加可执行文件目标
# 参数1：生成的程序名称和存放路径 (放到target目录中)
# 参数2及以后：编译该程序所需的源文件列表
add_executable(../target/a.out ${DIR_SRCS})
