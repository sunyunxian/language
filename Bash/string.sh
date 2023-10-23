#!/usr/bin/env bash

foo="foo"
bar="bar"
foobar="foobar"

# 拼接
new_foobar="${foo}${bar}"
echo "${new_foobar}"

# 长度
echo "${foo} length = ${#foo}"

# 提取子串
echo "bar:1:1 is ${bar:1:1}"

# 包含关系：A =~ B -> A 包含 B
if [[ "${foobar}" =~ ${bar} ]]; then
    echo "include"
fi
if [[ "${foobar}" == "${new_foobar}" ]]; then
    echo "equal"
fi
