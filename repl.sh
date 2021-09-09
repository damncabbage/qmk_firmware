#!/bin/sh -u

while :
do
  ls -d keyboards/moonlander/keymaps/*/* | entr -pcsd \
    'KM=$(basename $(dirname $0)); qmk compile -kb moonlander -km "$KM"' # && wally-cli moonlander_$KM.bin'
  RES=$?
  if [ "$RES" -lt 2 ]; then
    exit "$RES"
  fi
done
