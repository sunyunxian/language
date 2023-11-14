#!/usr/bin/env bash

# 编译单个 C 文件脚本
# 编译成同名二进制文件，并默认放到 build 文件夹下
# 执行编译后的二进制文件

# check input
[[ "${1}" ]] && cfile="${1}" || exit 1

build_fn="build"
cfile_out=$(echo "${cfile%.*}" | awk -F "/" '{print $NF}')
[[ -d "${build_fn}" ]] || mkdir "${build_fn}"

printf "compile %s to %s/%s\n\n" "${cfile}" "${build_fn}" "${cfile_out}"
compiler_cli="gcc -O -std=c99 -o ${build_fn}/${cfile_out} ${cfile}"
printf "compil cli: %s\n" "${compiler_cli}"

${compiler_cli}

printf "run %s/%s\n\n" "${build_fn}" "${cfile_out}"

"./${build_fn}/${cfile_out}"

printf "\n"
