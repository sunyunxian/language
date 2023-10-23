#!/usr/bin/env bash

function get_local_ip() {
    ifconfig -a | grep inet | grep -v inet6 | grep -v 127.0.0.1 | awk '{print $2}'
}

get_local_ip
