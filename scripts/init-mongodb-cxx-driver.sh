#!/bin/bash

mkdir -p temp
cd temp

curl -OL https://github.com/mongodb/mongo-cxx-driver/releases/download/r4.3.1/mongo-cxx-driver-r4.3.1.tar.gz
tar -xzf mongo-cxx-driver-r4.3.1.tar.gz
cd mongo-cxx-driver-r4.3.1/build

cmake .. -DCMAKE_RELEASE_TYPE=Release -DCMAKE_CXX_STANDARD=17 -DBUILD_SHARED_LIBS=OFF

make -j$(nproc)
make install

cd ../../../
rm temp -fr
