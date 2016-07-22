#!/bin/bash

# Debug
#set -ev

parent_path=$( cd "$(dirname "${BASH_SOURCE}")" ; pwd -P )
cd $parent_path

if [ -f "../test/build/debug/vector_testd" ]; then
     ./../test/build/debug/vector_testd
fi

if [ -f "../test/build/release/vector_test" ]; then
     ./../test/build/release/vector_test
fi
