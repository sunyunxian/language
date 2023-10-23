#!/usr/bin/env bash

# while loop
function while_loop() {
    local n=1
    while [[ ${n} -lt 10 ]]; do
        echo "${n}"
        n=$((n + 1))
    done
}

# for loop
function for_loop() {
    array=("v1" "v2" "v3")
    for i in "${array[@]}"; do
        echo "${i}"
    done
}

# for loop
function for_math_loop() {
    for ((i = 1; i <= 10; i++)); do
        echo "${i}"
    done
}

# break

function for_break_loop() {
    for i in "develop" "boss"; do
        if [[ ${i} == "boss" ]]; then
            echo "wow, this is ${i}, break"
            break
        else
            echo "this is ${i}"
        fi
        echo "welcome here ${i}"
    done
}
# continue
# for i in "develop" "boss" "bigboss"; do
#     if [[ ${i} == "boss" ]]; then
#         echo "wow, this is ${i}, break"
#         continue
#     else
#         echo "this is ${i}"
#     fi
#     echo "welcome here ${i}"
# done

# select
# echo "Which Operating System do you like?"

# select os in Ubuntu LinuxMint Windows8 Windows10 WindowsXP; do
#     case ${os} in
#     "Ubuntu")
#         echo "You like Ubuntu"
#         ;;
#     *)
#         echo "You don't like Ubuntu"
#         ;;
#     esac
#     break
# done

function main() {
    while_loop
    for_loop
    for_math_loop
    for_break_loop
}

main
