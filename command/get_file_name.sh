#!/bin/bash

echo `basename $1 | sed 's/\.c/\.run/'`
