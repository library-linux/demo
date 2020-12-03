#!/bin/bash

if [[ $# -eq 2 ]];then
    echo `basename $1 | sed 's/\.c//'`
else
    echo `basename $1 | sed 's/\.c/\.run/'`
fi

