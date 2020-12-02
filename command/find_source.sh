#!/bin/bash

directory=$1
regular=$2

cd ${directory}

for i in ${directory}/${regular};do
    echo $i
done

cd ${OLDPWD}


