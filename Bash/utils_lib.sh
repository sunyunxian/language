#!/usr/bin/env bash

# 函数体内可以使用参数变量，获取函数参数。函数的参数变量，与脚本参数变量是一致的。
#
# $1~$9：函数的第一个到第 9 个的参数。
# $0：函数所在的脚本名。
# $#：函数的参数总数。
# $@：函数的全部参数，参数之间使用空格分隔。
# $*：函数的全部参数，参数之间使用变量 $IFS 值的第一个字符分隔，默认为空格，但是可以自定义。

# bash function 是不能返回除了数字类型外（0~257）的其他数据类型的，获取字符串和数组是不行的
#
# 0. 通常的方法是：执行 function 然后使用 $? 拿到 function 的 return 值
# 1. 想要 return 的结果使用 echo 代替，这样子就可以在外部使用的时候用一个变量结住：return_variable=$(function name)。
# 2. 因为 function 内只要不声明 local，那么就是 global 的，所以不声明的时候就会是 global，全局拿即可。
# 3. 编写一个可以返回 String 类型的 function 进行调用。（这个没啥必要）

function get_local_ip() {
    local ip
    ip=$(ifconfig -a | grep inet | grep -v inet6 | grep -v 127.0.0.1 | awk '{print $2}')
    echo "${ip}"
}

function create_new_file() {

    local file_name
    if [[ ${1} ]]; then
        file_name=$1
    else
        echo "Input your want create file name" && exit 0
    fi

    if [[ -f ${file_name} ]]; then
        rm -rf "${file_name}"
    fi
    touch "${file_name}"
}
