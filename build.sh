#!/bin/bash
export COMPILE=compile_out
export HOME=$(pwd)
#echo ${HOME}
rm -rf ${COMPILE}
mkdir -p ${COMPILE}
cd ${COMPILE}
qmake ../QT_game.pro
make -j4
echo "run QT_game ........"

./release/QT_game