#!/bin/bash

MODEL_NAME=${1}
./geo_gen ./geo_config/${MODEL_NAME}.txt ./geo/${MODEL_NAME}.geo
netgen
