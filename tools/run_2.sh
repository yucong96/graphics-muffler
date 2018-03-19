#!/bin/bash

MODEL_NAME=${1}
./vol2vtk ./vol/${MODEL_NAME}.vol ./vtk/${MODEL_NAME}.vtk
cp ./vtk/${MODEL_NAME}.vtk ../tet/${MODEL_NAME}.vtk
