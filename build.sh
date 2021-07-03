#!/bin/bash
export COMPILE=compile_out
export HOME=$(pwd)
#echo ${HOME}
rm -rf ${COMPILE}
mkdir -p ${COMPILE}
cd ${COMPILE}
qmake ../QT_game.pro
make -j8
./release/QT_game