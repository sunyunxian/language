#!/usr/bin/env bash

file_name="${0}"

[[ "${1}" ]] && args1="${1}" || echo "\$1 in null"

echo "${file_name}"
echo "${args1}"
