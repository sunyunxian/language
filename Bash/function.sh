#!/usr/bin/env bash

set -e

function do_something() {
    echo "this bash file name is ${0}" && return 0
}

do_something
echo "function result is " $?

function echo_args() {
    echo "args one is ${1}"
    echo "args length ${#}"
    echo "all args is ${@}"
}
echo_args 1 2 3 4

# /e/code/person/PKM/docs/bash
# args one is one
# args number is 4
# all args is one two three four
var="global var"
function local_var() {
    local var_one
    var_one="function local var"
    echo "${var_one}"
}
local_var
echo "${var}"
